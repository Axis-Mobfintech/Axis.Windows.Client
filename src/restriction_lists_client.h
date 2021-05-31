
#ifndef _RESTRICTION_LIST_CLIENT_
#define _RESTRICTION_LIST_CLIENT_


#include <grpcpp/grpcpp.h>

#include "auto_gen_grpc_client\restriction_list.grpc.pb.h"

using axis::transactions::RestrictionListService;
using axis::transactions::RestrictionListResponse;
using axis::transactions::RestrictionListRequest;
using axis::transactions::RestrictionListCardInformation;
using axis::transactions::PrimaryAccountReferenceBlackList;
using axis::transactions::PrimaryAccountNumberBlackList;
//using axis::transactions::PrimaryAccountReferenceWhiteList;
//using axis::transactions::PrimaryAccountNumberWhiteList;


using grpc::Channel;
using grpc::Status;


class RestrictionListsClient
{
public:
   RestrictionListsClient(std::shared_ptr<Channel> channel);
   ~RestrictionListsClient();
   RestrictionListResponse GetRestrictionList(RestrictionListRequest parametres, int timeout_seconds=10) throw (Status);

private:
   std::unique_ptr<RestrictionListService::Stub> stub_;
};


#endif /* _RESTRICTION_LIST_CLIENT_ */
