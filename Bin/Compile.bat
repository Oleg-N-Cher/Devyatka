@ECHO OFF
IF NOT "%XDev%"=="" GOTO XDev
ECHO Please set system variable XDev=X:\Path\To\XDev
PAUSE
EXIT

:XDev

SET Options=--no-std-crt0
SET Include=-I ..\Lib\C -I ..\Lib\Obj
SET Clean=FALSE

%XDev%\ZXDev\Bin\Compile.bat %1
