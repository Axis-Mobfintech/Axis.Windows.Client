
#ifndef _ACCEPTANCE_LIST_CLIENT_
#define _ACCEPTANCE_LIST_CLIENT_


#include <grpcpp/grpcpp.h>

#include "auto_gen_grpc_client\acceptance_list.grpc.pb.h"

using axis::transactions::AcceptanceListService;
using axis::transactions::AcceptanceListResponse;
using axis::transactions::AcceptanceListRequest;
using axis::transactions::AcceptanceListCardInformation;
using axis::transactions::PrimaryAccountReferenceWhiteList;
using axis::transactions::PrimaryAccountNumberWhiteList;


using grpc::Channel;
using grpc::Status;


class AcceptanceListsClient
{
public:
   AcceptanceListsClient(std::shared_ptr<Channel> channel);
   ~AcceptanceListsClient();
   AcceptanceListResponse GetAcceptanceList(AcceptanceListRequest parametres, int timeout_seconds=10) throw (Status);

private:
   std::unique_ptr<AcceptanceListService::Stub> stub_;
};


#endif /* _ACCEPTANCE_LIST_CLIENT_ */
