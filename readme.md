#**Introdu��o**

---
O projeto AXIS Client visa demonstrar o uso da API gRPC, em C++, para acesso ao Servidor AXIS Go Cloud.


#**Documenta��o**

---
- https://grpc.io/
- https://github.com/microsoft/vcpkg 
- https://sanoj.in/2020/05/07/working-with-grpc-in-windows.html


#**Instala��o do ambiente**

##**Windows**

---
- Instalar Visual Studio 2015, 2017 ou 2019;
- No Visual Studio, instalar Templates para Visual C++;
- Instalar o Package Manager vcpkg (ser� utilizado para a instala��o e uso de bibliotecas adicionais, ex.: gPRC, Protoc etc.):
   - cd c:\tools
   - git clone https://github.com/microsoft/vcpkg 
   - .\vcpkg\bootstrap-vcpkg.bat
   - Acrescentar o diret�rio de instala��o � vari�vel de ambiente PATH: "C:\tools\vcpkg"
- Instalar o gRPC (pode demorar quase 1 hora): "vcpkg install grpc:x64-windows"
- Instalar o protobuf: "vcpkg install protobuf protobuf:x64-windows"
- Executar o comando a seguir, para que os pacotes rec�m instalados fiquem dispon�veis para o sistema: "vcpkg integrate install"
- Acrescentar o diret�rio do protoc � vari�vel de ambiente PATH: "C:\tools\vcpkg\packages\protobuf_x64-windows\tools\"

Para mais informa��es, consultar: 
   - https://sanoj.in/2020/05/07/working-with-grpc-in-windows.html
   - https://github.com/Microsoft/vcpkg


##**Linux**

---
// TODO


##**Outras plataformas?**

---
// TODO


#**Gera��o autom�tica dos fontes em C++**
Para realizar a compila��o dos arquivos *.protoc, dando origem aos fontes em C++:
   - Copiar a �ltima vers�o dos arquivos *.proto, recebidos da AXIS, para a pasta "gRPC_protos";     
   - Executar o "build_protos.bat".




