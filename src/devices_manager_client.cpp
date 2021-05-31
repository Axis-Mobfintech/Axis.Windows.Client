#include "devices_manager_client.h"


using grpc::ClientContext;


DevicesManagerClient::DevicesManagerClient(std::shared_ptr<Channel> channel)
{
   stub_ = DeviceRegisterService::NewStub(channel);
}

DevicesManagerClient::~DevicesManagerClient()
{
}

DeviceRegisterResponse DevicesManagerClient::RegisterDevice(DeviceRegisterRequest registrerDevice, int timeout_seconds) throw (Status) {

   // Container for the data we expect from the server.
   DeviceRegisterResponse response;

   // Context for the client. It could be used to convey extra information to
   // the server and/or tweak certain RPC behaviors.
   ClientContext context;
   
   // Set timeout for API
   std::chrono::system_clock::time_point deadline =
      std::chrono::system_clock::now() + std::chrono::seconds(timeout_seconds);

   context.set_deadline(deadline);

   // The actual RPC.
   Status status = stub_->RegisterDevice(&context, registrerDevice, &response);

   if (status.ok())
   {
      return response;
   }

   throw Status(status);
}
