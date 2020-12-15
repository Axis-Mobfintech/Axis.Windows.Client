#include "restriction_lists_client.h"


using grpc::ClientContext;


RestrictionListsClient::RestrictionListsClient(std::shared_ptr<Channel> channel)
{
   stub_ = RestrictionLists::NewStub(channel);
}

RestrictionListsClient::~RestrictionListsClient()
{
}

RestrictionListResponse RestrictionListsClient::GetRestrictionList(RestrictionListRequest parametres) throw (Status) {

   // Container for the data we expect from the server.
   RestrictionListResponse response;

   // Context for the client. It could be used to convey extra information to
   // the server and/or tweak certain RPC behaviors.
   ClientContext context;

   // The actual RPC.
   Status status = stub_->GetRestrictionList(&context, parametres, &response);

   if (status.ok())
   {
      return response;
   }

   throw Status(status);
}
