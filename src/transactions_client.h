
#ifndef _TRANSACTION_CLIENT_
#define _TRANSACTION_CLIENT_


#include <grpcpp/grpcpp.h>

#include "auto_gen_grpc_client\passage_register.grpc.pb.h"


using axis::transactions::RegisterPassageService;
using axis::transactions::RegisterPassageRequest;
using axis::transactions::RegisterPassageResponse;

using grpc::Channel;
using grpc::Status;


class TransactionsClient
{
public:
   TransactionsClient(std::shared_ptr<Channel> channel);
   ~TransactionsClient();
   RegisterPassageResponse MakeTransaction(RegisterPassageRequest registrer, int timeout_seconds=10) throw (Status);

private:
   std::unique_ptr<RegisterPassageService::Stub> stub_;
};


#endif /* _TRANSACTION_CLIENT_ */
