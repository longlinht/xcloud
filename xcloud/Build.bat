@echo off

cd /D %VS110COMNTOOLS%
call vsvars32.bat
cd /D %~dp0

del /F /A *.suo
del /F /A *.user
del /F *.sln
del /F *.vcproj
del /F *.vcxproj
del /F *.pdb
del /F *.ncb
del /F *.idb
del /F *.sdf
del /F *.filters

qmake -tp vc xcloud.pro

rd  /S /Q   _UpgradeReport_Files
rd  /S /Q   Backup
rd  /S /Q   debug
rd  /S /Q   release

rem MSBuild RProxy.vcxproj /p:RProxy=Debug
rem MSBuild RProxy.vcxproj /p:RProxy=Release