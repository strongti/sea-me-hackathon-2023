#ifndef CLUSTERSTUBIMPL_H_
#define CLUSTERSTUBIMPL_H_
#include <CommonAPI/CommonAPI.hpp>
#include <v1/commonapi/ClusterStubDefault.hpp>
#include <QObject>

class ClusterStubImpl: public QObject, public v1_0::commonapi::ClusterStubDefault {
    Q_OBJECT
public:
    ClusterStubImpl();
    virtual ~ClusterStubImpl();
    virtual void updateSpeed(const std::shared_ptr<CommonAPI::ClientId> _client, int _speed, updateSpeedReply_t _reply);
    virtual void updateRPM(const std::shared_ptr<CommonAPI::ClientId> _client, int _rpm, updateRPMReply_t _reply);
    virtual void clickButtons(const std::shared_ptr<CommonAPI::ClientId> _client, std::string _command, clickButtonsReply_t _reply);
    virtual void sendImage(const std::shared_ptr<CommonAPI::ClientId> _client, std::vector< uint8_t > _imageData, sendImageReply_t _reply);
signals:
    void signalSpeed(int);
    void signalRPM(int);
    void signalButtons(std::string);
    void signalImage(std::vector< uint8_t >);
};
#endif /* CLUSTERSTUBIMPL_H_ */
