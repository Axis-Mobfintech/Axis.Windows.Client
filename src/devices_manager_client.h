
#ifndef _DEVICE_MANAGER_CLIENT_
#define _DEVICE_MANAGER_CLIENT_


#include <grpcpp/grpcpp.h>

#include "auto_gen_grpc_client\device_register.grpc.pb.h"


using axis::transactions::DeviceRegisterService;
using axis::transactions::DeviceRegisterRequest;
using axis::transactions::DeviceRegisterResponse;

using grpc::Channel;
using grpc::Status;


class DevicesManagerClient
{
public:
   DevicesManagerClient(std::shared_ptr<Channel> channel);
   ~DevicesManagerClient();
   DeviceRegisterResponse RegisterDevice(DeviceRegisterRequest registrerDevice, int timeout_seconds=10) throw (Status);

private:
   std::unique_ptr<DeviceRegisterService::Stub> stub_;
};


#endif /* _DEVICE_MANAGER_CLIENT_ */
