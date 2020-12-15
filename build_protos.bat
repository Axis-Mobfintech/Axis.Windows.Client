@echo off


set CURRENT_DIR=%~dp0

:: Diretórios de destino dos fontes C++ (que serão gerados pelo gPRC, a partir dos arquivos *.proto)
set OUTPUT_DIR=%CURRENT_DIR%src\auto_gen_grpc_client

:: Diretórios dos arquivos *.proto, que serão compilados para dar origem aos fontes em C++
set PROTOS_DIR=%CURRENT_DIR%gRPC_protos

:: Diretório dos inclues do gRPC
set PROTO_DIR_INCLUDE=C:\tools\vcpkg\packages\protobuf_x64-windows\include

:: Diretório Protobuffer
set GRPC_CPP_PLUGIN=C:\tools\vcpkg\packages\grpc_x64-windows\tools\grpc\grpc_cpp_plugin.exe


:: Deleta os fontes c++ existentes
del src\auto_gen_grpc_client\*              /q 
del src\auto_gen_grpc_client\Protos\*       /q 
del src\auto_gen_grpc_client\logs\protos\*  /q 


:: Concatena o nome de todos os arquivos *.proto 
setlocal enabledelayedexpansion enableextensions
set PROTO_FILES=
for /R %PROTOS_DIR% %%x in (*.proto) do set PROTO_FILES=!PROTO_FILES! %%~fx
set PROTO_FILES=%PROTO_FILES:~1%
                   

:: Generates the cpp file required for the message structures
protoc --proto_path=%PROTOS_DIR% --proto_path=%PROTO_DIR_INCLUDE% --cpp_out=%OUTPUT_DIR% %PROTO_FILES%

:: Generates the cpp file required for the service interfaces
protoc --proto_path=%PROTOS_DIR% --proto_path=%PROTO_DIR_INCLUDE% --grpc_out=%OUTPUT_DIR% --plugin=protoc-gen-grpc=%GRPC_CPP_PLUGIN% %PROTO_FILES%


:: Copia os arquivos *.cc, das pastas "Proto" e "logs\Proto" para a raiz "auto_gen_grpc_client"
move /y %OUTPUT_DIR%\Protos\*cc %OUTPUT_DIR%\
move /y %OUTPUT_DIR%\logs\protos\*.cc %OUTPUT_DIR%\