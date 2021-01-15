#include <iostream>
#include <memory>
#include <string>
#include <conio.h>

#include <grpcpp/grpcpp.h>
#include <grpcpp/security/credentials.h>

#include <google/protobuf/util/time_util.h>

#include "devices_prameters_client.h"
#include "restriction_lists_client.h"
#include "devices_manager_client.h"
#include "transactions_client.h"
#include "debit_recovery.h"

#include "app_version.h"


using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;

using grpc::experimental::AltsCredentials;
using grpc::experimental::AltsCredentialsOptions;

using google::protobuf::Timestamp;
using google::protobuf::util::TimeUtil;



/*------------------------------------------------------------------*/
static std::string obtem_dado_(std::string titulo)
{
   char data[30];

   std::cout << titulo << " ";

   std::cin.getline(data, sizeof (data));   

   return std::string(data);
}


/*-----------------------------------------------------*/
static void registro_do_validador_(void) 
{
   std::cout << std::endl << "##########  Registro do Validador  ##########" << std::endl << std::endl;
       
   // Create a default SSL ChannelCredentials object.
   auto channel_creds = grpc::SslCredentials(grpc::SslCredentialsOptions());
   // Create a channel using the credentials created in the previous step.
   auto channel = grpc::CreateChannel("transaction.axis-mobfintech.com:5001", channel_creds);       

   DevicesManagerClient deviceManagerClient(channel);

   DeviceRegister registrerDevice;   

   registrerDevice.set_ksn_data("1234567890"); //KSN LEITOR
   registrerDevice.set_device_serial_number("1234567890");
   registrerDevice.set_reader_serial_number("1234567890");
   
   registrerDevice.set_line_id(obtem_dado_("Insira o ID da linha   :"));
   registrerDevice.set_operator_id(obtem_dado_("Insira o ID do operador:"));
   registrerDevice.set_vehicle_id(obtem_dado_("Insira o ID do veiculo :"));
   
   auto date_time = new Timestamp{};
   date_time->set_seconds(time(NULL));
   date_time->set_nanos(0);
   registrerDevice.set_allocated_register_date(date_time);
     

   std::cout << std::endl << "RegisterDevice...." << std::endl ;

   DeviceRegisterResponse response;
   try {
      response = deviceManagerClient.RegisterDevice(registrerDevice);
   }
   catch (grpc::Status s)
   {
      std::cout << ">> Erro:" << s.error_code() << std::endl;
      std::cout << ">> Descricao:" << s.error_message() << std::endl;
      return;
   }

   std::cout 
      << "RegisterDevice OK!" << std::endl << std::endl
      << "  response code: " << response.response_code() << std::endl
      << "  register code: " << response.register_code() << std::endl
      << "  device id    : " << response.device_id() << std::endl
      << "  date         : " << TimeUtil::ToString(response.register_date()) << std::endl;         
}


/*-----------------------------------------------------*/
static void requisicao_de_parametros_(void)
{
   std::cout << std::endl << "##########  Requisicao parametros  ##########" << std::endl << std::endl;

   // Create a default SSL ChannelCredentials object.
   auto channel_creds = grpc::SslCredentials(grpc::SslCredentialsOptions());
   // Create a channel using the credentials created in the previous step.      
   auto channel = grpc::CreateChannel("transaction.axis-mobfintech.com:5001", channel_creds);


   DevicesParametersClient devicesParameters(channel);

   Parameters parametres;

   parametres.set_device_id("id do validador");
   parametres.set_device_serial_number("numero serie validador");
   parametres.set_emv_parameters_version(1234);
   parametres.set_bin_parameters_version(1234);
   parametres.set_register_code(1234);
   parametres.set_ksn_data("ksn"); //KSN LEITOR
   parametres.set_reader_serial_number("numero de serie do leitor");

   parametres.set_line_id(obtem_dado_("Insira o ID da linha   :"));
   parametres.set_operator_id(obtem_dado_("Insira o ID do operador:"));
   parametres.set_vehicle_id(obtem_dado_("Insira o ID do veiculo :"));

   auto date_time = new google::protobuf::Timestamp{};
   date_time->set_seconds(time(NULL));
   date_time->set_nanos(0);
   parametres.set_allocated_register_date(date_time);


   std::cout << std::endl << "RegisterDevice...." << std::endl;

   ParametersResponse response;
   try {
      response = devicesParameters.GetDeviceParameters(parametres);
   }
   catch (grpc::Status s)
   {
      std::cout << ">> Erro:" << s.error_code() << std::endl;
      std::cout << ">> Descricao:" << s.error_message() << std::endl;
      return;
   }
   
   std::cout
      << "RegisterDevice OK!" << std::endl << std::endl
      << "  response code         : " << response.response_code() << std::endl
      << "  emv parameters version: " << response.emv_parameters_version() << std::endl
      << "  bin parameters version: " << response.bin_parameters_version() << std::endl
      << "  date                  : " << TimeUtil::ToString(response.response_date()) << std::endl;
      

   int i;

   // AIDs
   for (i = 0 ; i < response.aid_table_size(); i++)
   {      
      ApplicationIdentifier aid = response.aid_table(i);
      std::cout
         << "   table index           : " << aid.index() << std::endl
         << "   AID                   : " << aid.application_identifier() << std::endl
         << "   action                : " << aid.card_action() << std::endl
         << "     kernel ctls         : " << aid.general_flags().kernel_ctls() << std::endl
         << "     authorized amount   : " << aid.authorized_amount() << std::endl
         << "     country code        : " << aid.country_code() << std::endl
         << "     currency code       : " << aid.currency_code() << std::endl
         << "     currency exponent   : " << aid.currency_exponent() << std::endl
         << "     terminal type       : " << aid.terminal_type() << std::endl
         << "     merchant category   : " << aid.merchant_category_code() << std::endl
         << "     TTQ                 : " << aid.terminal_transaction_qualifiers() << std::endl
         << "     ctls floor limit    : " << aid.contactless_floor_limit() << std::endl
         << "     reader floor limit  : " << aid.reader_floor_limit() << std::endl
         << "     limit no on device  : " << aid.limit_no_on_device() << std::endl //(No On-device CVM)
         << "     limit on device     : " << aid.limit_on_device() << std::endl    //(On - device CVM)
         << "     cvm required limit  : " << aid.cvm_required_limit() << std::endl
         << "     term. cap.          : " << aid.terminal_capabilities() << std::endl
         << "     add. term. cap.     : " << aid.addictional_terminal_capabilities() << std::endl
         << "     app. version number : " << aid.application_version_number() << std::endl
         << "     card data input cap.: " << aid.card_data_input_capability() << std::endl
         << "     cvm cap. req.       : " << aid.cvm_capability_required() << std::endl
         << "     cvm cap. not req.   : " << aid.cvm_capability_not_required() << std::endl
         << "     security cap.       : " << aid.security_capability() << std::endl
         << "     TAC default         : " << aid.terminal_action_code_default() << std::endl
         << "     TAC denial          : " << aid.terminal_action_code_denial() << std::endl
         << "     TAC online          : " << aid.terminal_action_code_online() << std::endl
         << "     risk management data: " << aid.risk_management_data() << std::endl
         << "     category code       : " << aid.category_code() << std::endl;
   }

   // CAPKs
   for (i = 0; i < response.capk_table_size(); i++)
   {
      CertificateAuthorityPublicKeyTable capk = response.capk_table(i);
      std::cout
         << "   table index           : " << capk.index() << std::endl
         << "     registered id.      : " << capk.registered_identifier() << std::endl
         << "     rsa key modulus     : " << capk.rsa_key_modulus() << std::endl
         << "     rsa key exponent    : " << capk.rsa_key_exponent() << std::endl
         << "     checksum            : " << capk.checksum() << std::endl;
   }

   // BINs
   for (i = 0; i < response.bin_table_size(); i++)
   {
      AcceptedBankIdentificationNumber bin = response.bin_table(i);
      std::cout
         << "   table index           : " << bin.index() << std::endl
         << "     issuer code         : " << bin.issuer_code() << std::endl
         << "     initial range       : " << bin.initial_range() << std::endl
         << "     final range         : " << bin.final_range() << std::endl
         << "     total trans. allowed: " << bin.total_sequential_transactions_allowed() << std::endl;
   }

}

/*-----------------------------------------------------*/
static void requisicao_da_lista_de_excecao_(void)
{   
   std::cout << std::endl << "##########  Requisicao da lista de excecao  ##########" << std::endl << std::endl;

   // Create a default SSL ChannelCredentials object.
   auto channel_creds = grpc::SslCredentials(grpc::SslCredentialsOptions());
   // Create a channel using the credentials created in the previous step.
   auto channel = grpc::CreateChannel("transaction.axis-mobfintech.com:5001", channel_creds);

   RestrictionListsClient restrictionLists(channel);

   RestrictionListRequest parametres;

   parametres.set_device_id("id do validador");
   parametres.set_device_serial_number("numero serie validador");
   parametres.set_ksn_data("ksn"); //KSN LEITOR
   parametres.set_reader_serial_number("numero de serie do leitor");
   parametres.set_register_code(1234);
   parametres.set_restriction_list_version(1234);

   parametres.set_line_id(obtem_dado_("Insira o ID da linha   :"));
   parametres.set_operator_id(obtem_dado_("Insira o ID do operador:"));
   parametres.set_vehicle_id(obtem_dado_("Insira o ID do veiculo :"));

   auto date_time = new google::protobuf::Timestamp{};
   date_time->set_seconds(time(NULL));
   date_time->set_nanos(0);
   parametres.set_allocated_register_date(date_time);


   std::cout << std::endl << "GetRestrictionList...." << std::endl;

   RestrictionListResponse response;
   try {
      response = restrictionLists.GetRestrictionList(parametres);
   }
   catch (grpc::Status s)
   {
      std::cout << ">> Erro:" << s.error_code() << std::endl;
      std::cout << ">> Descricao:" << s.error_message() << std::endl;
      return;
   }

   std::cout
      << "RegisterDevice OK!" << std::endl << std::endl
      << "  response code           : " << response.response_code() << std::endl
      << "  restriction list version: " << response.restriction_list_version() << std::endl
      << "  date                    : " << TimeUtil::ToString(response.register_date()) << std::endl;

   int i;

   // Restrições
   for (i = 0; i < response.card_information_size(); i++)
   {
      RestrictionListCardInformation restriction_card_info = response.card_information(i);
      std::cout << "   restriction card - action         : " << restriction_card_info.action() << std::endl;

      RestrictionListCardInformation card_info = response.card_information(i);
      
      // PAN Black List
      PrimaryAccountNumberBlackList pan_black_list = card_info.pan_list();
      std::cout
         << "   pan black list index            : " << pan_black_list.index() << std::endl
         << "    reason                         : " << pan_black_list.reason() << std::endl
         << "    date                           : " << TimeUtil::ToString(pan_black_list.register_date()) << std::endl
         << "    initial pan crypt              : " << pan_black_list.initial_pan_crypt() << std::endl
         << "    pan sequence number            : " << pan_black_list.pan_sequence_number() << std::endl;
      
      // PAR Black List
      PrimaryAccountReferenceBlackList par_black_list = card_info.par_list();
      std::cout
         << "   pan black list index            : " << par_black_list.index() << std::endl
         << "    reason                         : " << par_black_list.reason() << std::endl
         << "    date                           : " << TimeUtil::ToString(par_black_list.register_date()) << std::endl
         << "    payment account reference      : " << par_black_list.payment_account_reference() << std::endl;
   }
}

/*-----------------------------------------------------*/
static void registro_de_passagem_(void)
{
   std::cout << std::endl << "##########   Iniciando Passagem de Registro   ##########" << std::endl << std::endl;

   /*
   AltsCredentialsOptions opts;
   opts.target_service_accounts.push_back("expected_server_service_account1");
   opts.target_service_accounts.push_back("expected_server_service_account2");
   auto creds = AltsCredentials(opts);
   std::shared_ptr<grpc::Channel> channel = CreateChannel ("localhost:50051", creds);
   */
         
   auto channel_creds = grpc::SslCredentials(grpc::SslCredentialsOptions());
   // Create a channel using the credentials created in the previous step.
   
   auto channel = grpc::CreateChannel("transaction.axis-mobfintech.com:5001", channel_creds);

   TransactionsClient transactionsClient(channel);

   RegisterPassage registrer;

   registrer.set_line_id(obtem_dado_("Insira o ID da linha   :"));
   registrer.set_operator_id(obtem_dado_("Insira o ID do operador:"));
   registrer.set_vehicle_id(obtem_dado_("Insira o ID do veiculo :"));

   registrer.set_device_id("id do validador");
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
   registrer.set_geolocation("geolocalizacao");


   std::cout << std::endl << "MakeTransaction..." << std::endl;

   RegisterPassageResponse response;
   try {
      response = transactionsClient.MakeTransaction(registrer);
   }
   catch (grpc::Status s)
   {
      std::cout << ">> Erro:" << s.error_code() << std::endl;
      std::cout << ">> Descricao:" << s.error_message() << std::endl;
      return;
   }

   std::cout << "RegisterDevice OK!" << std::endl << std::endl
      << "   response code           : " << response.response_code() << std::endl
      << "   NSU validador           : " << response.device_suid() << std::endl
      << "   NSU gateway             : " << response.gateway_uid() << std::endl
      << "   Versao Tabelas EMV      : " << response.emv_parameters_version() << std::endl
      << "   Versao Tabelas BIN      : " << response.bin_parameters_version() << std::endl
      << "   Versao lista restricao  : " << response.restriction_list_version() << std::endl;

}

/*-----------------------------------------------------*/
static void recuperacao_de_debito_(void)
{
   std::cout << std::endl << "##########   Iniciando Recuperacao de Debito   ##########" << std::endl << std::endl;
   
   // Create a default SSL ChannelCredentials object.
   auto channel_creds = grpc::SslCredentials(grpc::SslCredentialsOptions());
   // Create a channel using the credentials created in the previous step.
   auto channel = grpc::CreateChannel("transaction.axis-mobfintech.com:5001", channel_creds);

   
   RecoverDebitClient recoverDebit(channel);

   DebitRecovery debit;

   debit.set_line_id(obtem_dado_("Insira o ID da linha   :"));
   debit.set_operator_id(obtem_dado_("Insira o ID do operador:"));  
   debit.set_vehicle_id(obtem_dado_("Insira o ID do veiculo :"));

   //debit.set_emv_parameters_version();
   //debit.set_bin_parameters_version();
   //debit.set_restriction_list_version();

   debit.set_device_id("id do validador");
   debit.set_device_serial_number("1234567890");
   debit.set_device_suid("9999");
   debit.set_geolocation("geolocalizacao");

   //debit.set_pan_hash();
   //debit.set_par_card();

   debit.set_reader_serial_number("1234567890");
   debit.set_register_code(1234);
   
   debit.set_transaction_data("\x9F\x27\x01\x80\x9F\x26\x08\x76\x5D\xC1\x38\x07\xD1\xE4\xC8\x9F\x36\x02\x00\x06\x95\x05\x00\x10\x00\x00\x00\x8F\x01\x05\x9F\x37\x04\x5A\x77\xAC\xF0");
   debit.set_transaction_value(100);

   std::cout << std::endl << "MakeTransaction..." << std::endl ;

   DebitRecoveryResponse response;
   try {
      response = recoverDebit.RecoverDebit(debit);
   }
   catch (grpc::Status s)
   {
      std::cout << ">> Erro:" << s.error_code() << std::endl;
      std::cout << ">> Descricao:" << s.error_message() << std::endl;
      return;
   }

   std::cout << "RecoverDebit OK!" << std::endl << std::endl
      << "  response code           : " << response.response_code() << std::endl
      << "  NSU validador           : " << response.device_suid() << std::endl
      << "  NSU gateway             : " << response.gateway_uid() << std::endl
      << "  Versao Tabelas EMV      : " << response.emv_parameters_version() << std::endl
      << "  Versao Tabelas BIN      : " << response.bin_parameters_version() << std::endl
      << "  Versao lista restricao  : " << response.restriction_list_version() << std::endl;
}




/*-----------------------------------------------------*/
void main(void)
{
   int option;
   
   
   std::cout << std::endl
      << " ******************************************************" << std::endl
      << " *    Validador Windows C++ (Client AXIS) - " << AppVersion::getInstance().getFullVersion() << "   *" << std::endl
      << " ******************************************************" << std::endl;
   
   for (;;)
   {
      std::cout << std::endl 
         << " Selecione:" << std::endl
         << "   1 - registro do validador" << std::endl
         << "   2 - requisicao parametros" << std::endl
         << "   3 - requisicao de lista de excecao" << std::endl
         << "   4 - registro de passagem" << std::endl
         << "   5 - recuperacao de debito" << std::endl
         << "   6 - sair" << std::endl;

      option = std::cin.get() - '0';            
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore to the end of line
      
      switch (option)
      {
      case 1:
         registro_do_validador_();
         break;
      case 2:
         requisicao_de_parametros_();
         break;
      case 3:
         requisicao_da_lista_de_excecao_();
         break;
      case 4:
         registro_de_passagem_();
         break;
      case 5:
         recuperacao_de_debito_();
         break;
      case 6:
         std::cout << std::endl << "FIM!!" << std::endl;
         Sleep(2000);
         return;
      default:
         break;
      }
      std::cout << std::endl << std::endl << std::endl ;
   }
}
