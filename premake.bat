@echo off

if "%1" == "" goto default

"Utils/Premake/premake5.exe" %1
goto exit

:default
    "Utils/Premake/premake5.exe" vs2022
    goto exit

:exit