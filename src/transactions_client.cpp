#include "transactions_client.h"


using grpc::ClientContext;


TransactionsClient::TransactionsClient(std::shared_ptr<Channel> channel)
{
   stub_ = Transactions::NewStub(channel);
}

TransactionsClient::~TransactionsClient()
{
}

RegisterPassageResponse TransactionsClient::MakeTransaction(RegisterPassage registrer, int timeout_seconds)  throw (Status) {

   // Container for the data we expect from the server.
   RegisterPassageResponse response;

   // Context for the client. It could be used to convey extra information to
   // the server and/or tweak certain RPC behaviors.
   ClientContext context;

   // Set timeout for API
   std::chrono::system_clock::time_point deadline =
      std::chrono::system_clock::now() + std::chrono::seconds(timeout_seconds);

   context.set_deadline(deadline);

   // The actual RPC.
   Status status = stub_->MakeTransaction(&context, registrer, &response);

   if (status.ok())
   {
      return response;
   }

   throw Status(status);
}
