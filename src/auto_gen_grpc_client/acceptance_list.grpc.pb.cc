// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: acceptance_list.proto

#include "acceptance_list.pb.h"
#include "acceptance_list.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace axis {
namespace transactions {

static const char* AcceptanceListService_method_names[] = {
  "/axis.transactions.AcceptanceListService/GetAcceptanceList",
};

std::unique_ptr< AcceptanceListService::Stub> AcceptanceListService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< AcceptanceListService::Stub> stub(new AcceptanceListService::Stub(channel));
  return stub;
}

AcceptanceListService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetAcceptanceList_(AcceptanceListService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status AcceptanceListService::Stub::GetAcceptanceList(::grpc::ClientContext* context, const ::axis::transactions::AcceptanceListRequest& request, ::axis::transactions::AcceptanceListResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetAcceptanceList_, context, request, response);
}

void AcceptanceListService::Stub::experimental_async::GetAcceptanceList(::grpc::ClientContext* context, const ::axis::transactions::AcceptanceListRequest* request, ::axis::transactions::AcceptanceListResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetAcceptanceList_, context, request, response, std::move(f));
}

void AcceptanceListService::Stub::experimental_async::GetAcceptanceList(::grpc::ClientContext* context, const ::axis::transactions::AcceptanceListRequest* request, ::axis::transactions::AcceptanceListResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetAcceptanceList_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::axis::transactions::AcceptanceListResponse>* AcceptanceListService::Stub::PrepareAsyncGetAcceptanceListRaw(::grpc::ClientContext* context, const ::axis::transactions::AcceptanceListRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::axis::transactions::AcceptanceListResponse>::Create(channel_.get(), cq, rpcmethod_GetAcceptanceList_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::axis::transactions::AcceptanceListResponse>* AcceptanceListService::Stub::AsyncGetAcceptanceListRaw(::grpc::ClientContext* context, const ::axis::transactions::AcceptanceListRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetAcceptanceListRaw(context, request, cq);
  result->StartCall();
  return result;
}

AcceptanceListService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AcceptanceListService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AcceptanceListService::Service, ::axis::transactions::AcceptanceListRequest, ::axis::transactions::AcceptanceListResponse>(
          [](AcceptanceListService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::axis::transactions::AcceptanceListRequest* req,
             ::axis::transactions::AcceptanceListResponse* resp) {
               return service->GetAcceptanceList(ctx, req, resp);
             }, this)));
}

AcceptanceListService::Service::~Service() {
}

::grpc::Status AcceptanceListService::Service::GetAcceptanceList(::grpc::ServerContext* context, const ::axis::transactions::AcceptanceListRequest* request, ::axis::transactions::AcceptanceListResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace axis
}  // namespace transactions

