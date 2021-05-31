
#ifndef _DEBIT_RECOVERY_
#define _DEBIT_RECOVERY_


#include <grpcpp/grpcpp.h>

#include "auto_gen_grpc_client\debit_recovery.grpc.pb.h"


using axis::transactions::RecoverDebitService;
using axis::transactions::DebitRecoveryRequest;
using axis::transactions::DebitRecoveryResponse;

using grpc::Channel;
using grpc::Status;


class RecoverDebitClient
{
public:
   RecoverDebitClient(std::shared_ptr<Channel> channel);
   ~RecoverDebitClient();
   DebitRecoveryResponse RecoverDebit(DebitRecoveryRequest debit, int timeout_seconds=10) throw (Status);

private:
   std::unique_ptr<RecoverDebitService::Stub> stub_;
};


#endif /* _DEBIT_RECOVERY_ */
