// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: device_parameters.proto

#include "device_parameters.pb.h"
#include "device_parameters.grpc.pb.h"

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

static const char* DeviceParametersService_method_names[] = {
  "/axis.transactions.DeviceParametersService/GetDeviceParameters",
};

std::unique_ptr< DeviceParametersService::Stub> DeviceParametersService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< DeviceParametersService::Stub> stub(new DeviceParametersService::Stub(channel));
  return stub;
}

DeviceParametersService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetDeviceParameters_(DeviceParametersService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status DeviceParametersService::Stub::GetDeviceParameters(::grpc::ClientContext* context, const ::axis::transactions::ParametersRequest& request, ::axis::transactions::ParametersResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetDeviceParameters_, context, request, response);
}

void DeviceParametersService::Stub::experimental_async::GetDeviceParameters(::grpc::ClientContext* context, const ::axis::transactions::ParametersRequest* request, ::axis::transactions::ParametersResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetDeviceParameters_, context, request, response, std::move(f));
}

void DeviceParametersService::Stub::experimental_async::GetDeviceParameters(::grpc::ClientContext* context, const ::axis::transactions::ParametersRequest* request, ::axis::transactions::ParametersResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetDeviceParameters_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::axis::transactions::ParametersResponse>* DeviceParametersService::Stub::PrepareAsyncGetDeviceParametersRaw(::grpc::ClientContext* context, const ::axis::transactions::ParametersRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::axis::transactions::ParametersResponse>::Create(channel_.get(), cq, rpcmethod_GetDeviceParameters_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::axis::transactions::ParametersResponse>* DeviceParametersService::Stub::AsyncGetDeviceParametersRaw(::grpc::ClientContext* context, const ::axis::transactions::ParametersRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetDeviceParametersRaw(context, request, cq);
  result->StartCall();
  return result;
}

DeviceParametersService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DeviceParametersService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DeviceParametersService::Service, ::axis::transactions::ParametersRequest, ::axis::transactions::ParametersResponse>(
          [](DeviceParametersService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::axis::transactions::ParametersRequest* req,
             ::axis::transactions::ParametersResponse* resp) {
               return service->GetDeviceParameters(ctx, req, resp);
             }, this)));
}

DeviceParametersService::Service::~Service() {
}

::grpc::Status DeviceParametersService::Service::GetDeviceParameters(::grpc::ServerContext* context, const ::axis::transactions::ParametersRequest* request, ::axis::transactions::ParametersResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace axis
}  // namespace transactions

