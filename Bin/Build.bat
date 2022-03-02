@ECHO OFF
IF NOT "%XDev%"=="" GOTO XDev
ECHO Please set system variable XDev=X:\Path\To\XDev
PAUSE
EXIT

:XDev

SET CodeAdr=29900
SET DataAdr=50000
SET Options=--no-std-crt0
SET Include=-I ..\Lib\C -I ..\Lib\Obj
SET Target=TAP
SET Clean=FALSE

%XDev%\ZXDev\Bin\Build.bat %1
