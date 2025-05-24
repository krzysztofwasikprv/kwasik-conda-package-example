@echo off

"%CXX%" "%SRC_DIR%\softserve-query.cpp" -o softserve-query.exe
if errorlevel 1 exit 1

if not exist "%PREFIX%\bin" (
    mkdir "%PREFIX%\bin"
    if errorlevel 1 exit 1
)

copy softserve-query.exe "%PREFIX%\bin\"
if errorlevel 1 exit 1
