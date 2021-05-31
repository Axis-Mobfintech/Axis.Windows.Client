// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: device_register.proto

#include "device_register.pb.h"
#include "device_register.grpc.pb.h"

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

static const char* DeviceRegisterService_method_names[] = {
  "/axis.transactions.DeviceRegisterService/RegisterDevice",
};

std::unique_ptr< DeviceRegisterService::Stub> DeviceRegisterService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< DeviceRegisterService::Stub> stub(new DeviceRegisterService::Stub(channel));
  return stub;
}

DeviceRegisterService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_RegisterDevice_(DeviceRegisterService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status DeviceRegisterService::Stub::RegisterDevice(::grpc::ClientContext* context, const ::axis::transactions::DeviceRegisterRequest& request, ::axis::transactions::DeviceRegisterResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_RegisterDevice_, context, request, response);
}

void DeviceRegisterService::Stub::experimental_async::RegisterDevice(::grpc::ClientContext* context, const ::axis::transactions::DeviceRegisterRequest* request, ::axis::transactions::DeviceRegisterResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_RegisterDevice_, context, request, response, std::move(f));
}

void DeviceRegisterService::Stub::experimental_async::RegisterDevice(::grpc::ClientContext* context, const ::axis::transactions::DeviceRegisterRequest* request, ::axis::transactions::DeviceRegisterResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_RegisterDevice_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::axis::transactions::DeviceRegisterResponse>* DeviceRegisterService::Stub::PrepareAsyncRegisterDeviceRaw(::grpc::ClientContext* context, const ::axis::transactions::DeviceRegisterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::axis::transactions::DeviceRegisterResponse>::Create(channel_.get(), cq, rpcmethod_RegisterDevice_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::axis::transactions::DeviceRegisterResponse>* DeviceRegisterService::Stub::AsyncRegisterDeviceRaw(::grpc::ClientContext* context, const ::axis::transactions::DeviceRegisterRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncRegisterDeviceRaw(context, request, cq);
  result->StartCall();
  return result;
}

DeviceRegisterService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      DeviceRegisterService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< DeviceRegisterService::Service, ::axis::transactions::DeviceRegisterRequest, ::axis::transactions::DeviceRegisterResponse>(
          [](DeviceRegisterService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::axis::transactions::DeviceRegisterRequest* req,
             ::axis::transactions::DeviceRegisterResponse* resp) {
               return service->RegisterDevice(ctx, req, resp);
             }, this)));
}

DeviceRegisterService::Service::~Service() {
}

::grpc::Status DeviceRegisterService::Service::RegisterDevice(::grpc::ServerContext* context, const ::axis::transactions::DeviceRegisterRequest* request, ::axis::transactions::DeviceRegisterResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace axis
}  // namespace transactions

