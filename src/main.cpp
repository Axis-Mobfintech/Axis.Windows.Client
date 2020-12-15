#include <iostream>
#include <memory>
#include <string>

#include <grpcpp/grpcpp.h>
#include <grpcpp/security/credentials.h>
#include <google/protobuf/util/time_util.h>

#include "devices_prameters_client.h"
#include "restriction_lists_client.h"
#include "devices_manager_client.h"
#include "transactions_client.h"


using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;

using grpc::experimental::AltsCredentials;
using grpc::experimental::AltsCredentialsOptions;
//using grpc_impl::experimental::AltsCredentialsOptions;


/*-----------------------------------------------------*/
static void test_registro_validador_(void)
{
   std::cout << " Registro do Validador... " << std::endl;

   std::shared_ptr<grpc::Channel> channel = grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials());

   DevicesManagerClient deviceManagerClient(channel);

   DeviceRegister registrerDevice;

   registrerDevice.set_device_serial_number("numero serie validador");
   registrerDevice.set_ksn_data("ksn"); //KSN LEITOR
   registrerDevice.set_line_id("id da linha");
   registrerDevice.set_operator_id("id do operador");
   registrerDevice.set_reader_serial_number("numero de serie do leitor");
   registrerDevice.set_vehicle_id("id veiculo");

   auto date_time = new google::protobuf::Timestamp{};
   date_time->set_seconds(time(NULL));
   date_time->set_nanos(0);
   registrerDevice.set_allocated_register_date(date_time);

   std::cout << "RegisterDevice...." << std::endl;

   try {
      DeviceRegisterResponse response = deviceManagerClient.RegisterDevice(registrerDevice);
      std::cout << "FIM" << std::endl;
   }
   catch (Status s)
   {
      std::cout << "Erro:" << s.error_code() << std::endl;
      std::cout << "Descricao:" << s.error_message() << std::endl;
   }

}


/*-----------------------------------------------------*/
static void test_requisicao_parametros_(void)
{
   std::cout << " Requisicao parametros... " << std::endl;

   std::shared_ptr<grpc::Channel> channel = grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials());

   DevicesParametersClient devicesParameters(channel);

   Parameters parametres;

   parametres.set_device_id("id do validador");
   parametres.set_device_serial_number("numero serie validador");
   parametres.set_emv_parameters_version(1234);
   parametres.set_bin_parameters_version(1234);
   parametres.set_register_code(1234);
   parametres.set_ksn_data("ksn"); //KSN LEITOR
   parametres.set_line_id("id da linha");
   parametres.set_operator_id("id do operador");
   parametres.set_reader_serial_number("numero de serie do leitor");
   parametres.set_vehicle_id("id veiculo");

   auto date_time = new google::protobuf::Timestamp{};
   date_time->set_seconds(time(NULL));
   date_time->set_nanos(0);
   parametres.set_allocated_register_date(date_time);

   std::cout << " RegisterDevice...." << std::endl;

   try {
      ParametersResponse response = devicesParameters.GetDeviceParameters(parametres);
      std::cout << "FIM" << std::endl;
   }
   catch (Status s)
   {
      std::cout << "Erro:" << s.error_code() << std::endl;
      std::cout << "Descricao:" << s.error_message() << std::endl;
   }
}

/*-----------------------------------------------------*/
static void test_requisicao_lista_excecao_(void)
{
   std::cout << "Requisicao lista excecao... " << std::endl;

   std::shared_ptr<grpc::Channel> channel = grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials());

   RestrictionListsClient restrictionLists(channel);

   RestrictionListRequest parametres;

   parametres.set_device_id("id do validador");
   parametres.set_device_serial_number("numero serie validador");
   parametres.set_ksn_data("ksn"); //KSN LEITOR
   parametres.set_line_id("id da linha");
   parametres.set_operator_id("id do operador");
   parametres.set_reader_serial_number("numero de serie do leitor");
   parametres.set_register_code(1234);
   parametres.set_restriction_list_version(1234);
   parametres.set_vehicle_id("id veiculo");

   auto date_time = new google::protobuf::Timestamp{};
   date_time->set_seconds(time(NULL));
   date_time->set_nanos(0);
   parametres.set_allocated_register_date(date_time);


   std::cout << " GetRestrictionList...." << std::endl;

   try {
      RestrictionListResponse response = restrictionLists.GetRestrictionList(parametres);
      std::cout << "FIM" << std::endl;
   }
   catch (Status s)
   {
      std::cout << "Erro:" << s.error_code() << std::endl;
      std::cout << "Descricao:" << s.error_message() << std::endl;
   }

}

/*-----------------------------------------------------*/
static void test_requisicao_registro_passagem_(void)
{
   std::cout << " Iniciando Passagem de Registro... " << std::endl;

   /*
   AltsCredentialsOptions opts;
   opts.target_service_accounts.push_back("expected_server_service_account1");
   opts.target_service_accounts.push_back("expected_server_service_account2");
   auto creds = AltsCredentials(opts);
   std::shared_ptr<grpc::Channel> channel = CreateChannel ("localhost:50051", creds);

   */
   std::shared_ptr<grpc::Channel> channel = grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials());

   TransactionsClient transactionsClient(channel);

   RegisterPassage registrer;

   registrer.set_device_id("id do validador");
   registrer.set_operator_id("id do operador");
   registrer.set_reader_serial_number("numero de serie do leitor");
   registrer.set_device_serial_number("numero serie validador");
   registrer.set_register_code(1234);

   auto passage = new google::protobuf::Timestamp{};
   passage->set_seconds(time(NULL));
   passage->set_nanos(0);
   registrer.set_allocated_passage_date(passage);

   auto transaction = new google::protobuf::Timestamp{};
   transaction->set_seconds(time(NULL));
   transaction->set_nanos(0);
   registrer.set_allocated_transaction_date(transaction);

   registrer.set_device_suid("9999");
   registrer.set_pan_hash("\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF");
   registrer.set_par_card("par do cartao");

   /*
   Tag 9F27: Cryptogram Information Data (CID): 80
   ARQC
   No advice required
   Reason/advice code: No information given
   Tag 9F26: Application Cryptogram (AC): 765DC13807D1E4C8
   Tag 9F36: Application Transaction Counter (ATC): 0006
   Tag 95: Terminal Verification Results (TVR): 0010000000
   Byte 1: 00
   Byte 2: 10
   Requested service not allowed for card product (b5)
   Byte 3: 00
   Byte 4: 00
   Byte 5: 00
   Tag 8F: Certification Authority Public Key Index: 05
   Tag 9F37: Unpredictable Number (UN): 5A77ACF0
   */
   registrer.set_transaction_data("\x9F\x27\x01\x80\x9F\x26\x08\x76\x5D\xC1\x38\x07\xD1\xE4\xC8\x9F\x36\x02\x00\x06\x95\x05\x00\x10\x00\x00\x00\x8F\x01\x05\x9F\x37\x04\x5A\x77\xAC\xF0");
   registrer.set_emv_parameters_version(1234);
   registrer.set_bin_parameters_version(1234);
   registrer.set_restriction_list_version(1234);
   registrer.set_transaction_value(250);
   registrer.set_line_id("id da linha");
   registrer.set_vehicle_id("id veiculo");
   registrer.set_geolocation("geolocalizacao");


   std::cout << "MakeTransaction...." << std::endl;

   try {
      RegisterPassageResponse response = transactionsClient.MakeTransaction(registrer);
      std::cout << "FIM" << std::endl;
   }
   catch (Status s)
   {
      std::cout << "Erro:" << s.error_code() << std::endl;
      std::cout << "Descricao:" << s.error_message() << std::endl;
   }
}

/*-----------------------------------------------------*/
static void test_requisicao_recuperacao_debito_(void)
{
   std::cout << ">>>> Recuperacao de Debito indisponivel!!!" << std::endl;
}


/*-----------------------------------------------------*/
void main(void)
{
   int option;


   std::cout << std::endl
      << " ******************************************************" << std::endl
      << " *         Validador Windows C++ (AXIS Client)        *" << std::endl
      << " ******************************************************" << std::endl;

   for (;;)
   {
      std::cout << std::endl << std::endl 
         << " Selecione:" << std::endl
         << "  1-registro do validador" << std::endl
         << "  2-requisicao parametros" << std::endl
         << "  3-requisicao de lista de excecao" << std::endl
         << "  4-registro de passagem" << std::endl
         << "  5-recuperacao de debito" << std::endl
         << "  6-quit" << std::endl;

      std::cin >> option;
      std:: cout << std::endl << std::endl;

      switch (option)
      {
      case 1:
         test_registro_validador_();
         break;
      case 2:
         test_requisicao_parametros_();
         break;
      case 3:
         test_requisicao_lista_excecao_();
         break;
      case 4:
         test_requisicao_registro_passagem_();
         break;
      case 5:
         test_requisicao_recuperacao_debito_();
         break;
      case 6:
         std::cout << std::endl << "FIM!!" << std::endl;
         Sleep(2500);
         return;
      default:
         break;
      }
   }
}
