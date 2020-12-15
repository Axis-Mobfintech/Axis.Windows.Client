#include "devices_prameters_client.h"


using grpc::ClientContext;


DevicesParametersClient::DevicesParametersClient(std::shared_ptr<Channel> channel)
{
   stub_ = DevicesParameters::NewStub(channel);
}

DevicesParametersClient::~DevicesParametersClient()
{
}

ParametersResponse DevicesParametersClient::GetDeviceParameters(Parameters parametres) throw (Status) {

   // Container for the data we expect from the server.
   ParametersResponse response;

   // Context for the client. It could be used to convey extra information to
   // the server and/or tweak certain RPC behaviors.
   ClientContext context;

   // The actual RPC.
   Status status = stub_->GetDeviceParameters(&context, parametres, &response);

   if (status.ok())
   {
      return response;
   }

   throw Status(status);
}
