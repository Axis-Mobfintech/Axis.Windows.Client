
#ifndef _DEVICE_PARAMETER_CLIENT_
#define _DEVICE_PARAMETER_CLIENT_


#include <grpcpp/grpcpp.h>

#include "auto_gen_grpc_client\device-parameters.grpc.pb.h"
#include "auto_gen_grpc_client\device-parameters.pb.h"


using axis::transactions::DevicesParameters;
using axis::transactions::Parameters;
using axis::transactions::ParametersResponse;

using grpc::Channel;
using grpc::Status;


class DevicesParametersClient
{
public:
   DevicesParametersClient(std::shared_ptr<Channel> channel);
   ~DevicesParametersClient();
   ParametersResponse GetDeviceParameters(Parameters parametres) throw (Status);

private:
   std::unique_ptr<DevicesParameters::Stub> stub_;
};


#endif /* _DEVICE_PARAMETER_CLIENT_ */
