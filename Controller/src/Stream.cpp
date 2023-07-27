#include "Stream.h"



Stream::Stream(QObject *parent) : QObject(parent)
{
    runtime = CommonAPI::Runtime::get();
    myProxy = runtime->buildProxy<ClusterProxy>("local", "cluster_service");

    while (!myProxy->isAvailable())
        usleep(10);
}

void Stream::initCamera()
{
    std::cout << "Start---------- " << std::endl;
    if (!cap.isOpened()) {
        if (!cap.open(1)) {
            std::cerr << "Could not open camera." << std::endl;
            return;
        }
    }

    cv::namedWindow("Webcam", cv::WINDOW_AUTOSIZE); // 창 생성

    while (true) {
        cv::Mat frame;
        cap >> frame;

        if (frame.empty()) {
            std::cerr << "Could not capture frame." << std::endl;
            break; // 무한 루프 종료
        }

        cv::imshow("Webcam", frame); // 프레임 표시

        char key = (char)cv::waitKey(30); // 30ms 동안 키 입력 대기
        if (key == 27) { // 'ESC' 키를 누르면 루프 종료
            break;
        }
    }

    cv::destroyWindow("Webcam"); // 창 제거
}

void Stream::sendImage()
{
    cv::Mat frame;
    cap >> frame;

    if (frame.empty()) {
        std::cerr << "Could not capture frame." << std::endl;
        return;
    }

    std::vector<uint8_t> imageData(frame.data, frame.data + frame.total() * frame.elemSize());

    CommonAPI::CallStatus callStatus;
    myProxy->sendImage(imageData, callStatus);
}
