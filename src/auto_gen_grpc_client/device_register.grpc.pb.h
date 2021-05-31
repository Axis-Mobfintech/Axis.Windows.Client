// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: device_register.proto
#ifndef GRPC_device_5fregister_2eproto__INCLUDED
#define GRPC_device_5fregister_2eproto__INCLUDED

#include "device_register.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace axis {
namespace transactions {

class DeviceRegisterService final {
 public:
  static constexpr char const* service_full_name() {
    return "axis.transactions.DeviceRegisterService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status RegisterDevice(::grpc::ClientContext* context, const ::axis::transactions::DeviceRegisterRequest& request, ::axis::transactions::DeviceRegisterResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::axis::transactions::DeviceRegisterResponse>> AsyncRegisterDevice(::grpc::ClientContext* context, const ::axis::transactions::DeviceRegisterRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::axis::transactions::DeviceRegisterResponse>>(AsyncRegisterDeviceRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::axis::transactions::DeviceRegisterResponse>> PrepareAsyncRegisterDevice(::grpc::ClientContext* context, const ::axis::transactions::DeviceRegisterRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::axis::transactions::DeviceRegisterResponse>>(PrepareAsyncRegisterDeviceRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void RegisterDevice(::grpc::ClientContext* context, const ::axis::transactions::DeviceRegisterRequest* request, ::axis::transactions::DeviceRegisterResponse* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void RegisterDevice(::grpc::ClientContext* context, const ::axis::transactions::DeviceRegisterRequest* request, ::axis::transactions::DeviceRegisterResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void RegisterDevice(::grpc::ClientContext* context, const ::axis::transactions::DeviceRegisterRequest* request, ::axis::transactions::DeviceRegisterResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::axis::transactions::DeviceRegisterResponse>* AsyncRegisterDeviceRaw(::grpc::ClientContext* context, const ::axis::transactions::DeviceRegisterRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::axis::transactions::DeviceRegisterResponse>* PrepareAsyncRegisterDeviceRaw(::grpc::ClientContext* context, const ::axis::transactions::DeviceRegisterRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status RegisterDevice(::grpc::ClientContext* context, const ::axis::transactions::DeviceRegisterRequest& request, ::axis::transactions::DeviceRegisterResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::axis::transactions::DeviceRegisterResponse>> AsyncRegisterDevice(::grpc::ClientContext* context, const ::axis::transactions::DeviceRegisterRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::axis::transactions::DeviceRegisterResponse>>(AsyncRegisterDeviceRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::axis::transactions::DeviceRegisterResponse>> PrepareAsyncRegisterDevice(::grpc::ClientContext* context, const ::axis::transactions::DeviceRegisterRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::axis::transactions::DeviceRegisterResponse>>(PrepareAsyncRegisterDeviceRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void RegisterDevice(::grpc::ClientContext* context, const ::axis::transactions::DeviceRegisterRequest* request, ::axis::transactions::DeviceRegisterResponse* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void RegisterDevice(::grpc::ClientContext* context, const ::axis::transactions::DeviceRegisterRequest* request, ::axis::transactions::DeviceRegisterResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void RegisterDevice(::grpc::ClientContext* context, const ::axis::transactions::DeviceRegisterRequest* request, ::axis::transactions::DeviceRegisterResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::axis::transactions::DeviceRegisterResponse>* AsyncRegisterDeviceRaw(::grpc::ClientContext* context, const ::axis::transactions::DeviceRegisterRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::axis::transactions::DeviceRegisterResponse>* PrepareAsyncRegisterDeviceRaw(::grpc::ClientContext* context, const ::axis::transactions::DeviceRegisterRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_RegisterDevice_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status RegisterDevice(::grpc::ServerContext* context, const ::axis::transactions::DeviceRegisterRequest* request, ::axis::transactions::DeviceRegisterResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_RegisterDevice : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_RegisterDevice() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_RegisterDevice() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RegisterDevice(::grpc::ServerContext* /*context*/, const ::axis::transactions::DeviceRegisterRequest* /*request*/, ::axis::transactions::DeviceRegisterResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestRegisterDevice(::grpc::ServerContext* context, ::axis::transactions::DeviceRegisterRequest* request, ::grpc::ServerAsyncResponseWriter< ::axis::transactions::DeviceRegisterResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_RegisterDevice<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_RegisterDevice : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_RegisterDevice() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::axis::transactions::DeviceRegisterRequest, ::axis::transactions::DeviceRegisterResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::axis::transactions::DeviceRegisterRequest* request, ::axis::transactions::DeviceRegisterResponse* response) { return this->RegisterDevice(context, request, response); }));}
    void SetMessageAllocatorFor_RegisterDevice(
        ::grpc::experimental::MessageAllocator< ::axis::transactions::DeviceRegisterRequest, ::axis::transactions::DeviceRegisterResponse>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc::internal::CallbackUnaryHandler< ::axis::transactions::DeviceRegisterRequest, ::axis::transactions::DeviceRegisterResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_RegisterDevice() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RegisterDevice(::grpc::ServerContext* /*context*/, const ::axis::transactions::DeviceRegisterRequest* /*request*/, ::axis::transactions::DeviceRegisterResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* RegisterDevice(
      ::grpc::CallbackServerContext* /*context*/, const ::axis::transactions::DeviceRegisterRequest* /*request*/, ::axis::transactions::DeviceRegisterResponse* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* RegisterDevice(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::axis::transactions::DeviceRegisterRequest* /*request*/, ::axis::transactions::DeviceRegisterResponse* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_RegisterDevice<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_RegisterDevice<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_RegisterDevice : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_RegisterDevice() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_RegisterDevice() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RegisterDevice(::grpc::ServerContext* /*context*/, const ::axis::transactions::DeviceRegisterRequest* /*request*/, ::axis::transactions::DeviceRegisterResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_RegisterDevice : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_RegisterDevice() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_RegisterDevice() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RegisterDevice(::grpc::ServerContext* /*context*/, const ::axis::transactions::DeviceRegisterRequest* /*request*/, ::axis::transactions::DeviceRegisterResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestRegisterDevice(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_RegisterDevice : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_RegisterDevice() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->RegisterDevice(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_RegisterDevice() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status RegisterDevice(::grpc::ServerContext* /*context*/, const ::axis::transactions::DeviceRegisterRequest* /*request*/, ::axis::transactions::DeviceRegisterResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* RegisterDevice(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* RegisterDevice(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_RegisterDevice : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_RegisterDevice() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::axis::transactions::DeviceRegisterRequest, ::axis::transactions::DeviceRegisterResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::axis::transactions::DeviceRegisterRequest, ::axis::transactions::DeviceRegisterResponse>* streamer) {
                       return this->StreamedRegisterDevice(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_RegisterDevice() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status RegisterDevice(::grpc::ServerContext* /*context*/, const ::axis::transactions::DeviceRegisterRequest* /*request*/, ::axis::transactions::DeviceRegisterResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedRegisterDevice(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::axis::transactions::DeviceRegisterRequest,::axis::transactions::DeviceRegisterResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_RegisterDevice<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_RegisterDevice<Service > StreamedService;
};

}  // namespace transactions
}  // namespace axis


#endif  // GRPC_device_5fregister_2eproto__INCLUDED
