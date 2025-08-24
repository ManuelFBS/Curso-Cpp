@REM @echo off
@REM set BOOST_PATH=C:\MFBS\Trabajo\Cursos\Curso Intensivo de C++\Curso-Cpp\vcpkg\installed\x64-windows\include
@REM g++ -I "%BOOST_PATH%" %1 -o %~n1.exe
@REM %~n1.exe

@echo off
echo ========================================
echo    COMPILADOR PARA PROYECTOS C++ CON BOOST
echo ========================================

set BOOST_PATH=%~dp0vcpkg\installed\x64-windows\include

if "%~1"=="" (
    echo Error: Debes especificar un archivo .cpp
    echo Uso: compile.bat archivo.cpp
    pause
    exit /b 1
)

if not exist "%BOOST_PATH%" (
    echo Error: No se encuentra Boost en la ruta
    echo %BOOST_PATH%
    pause
    exit /b 1
)

echo Compilando %~1 con Boost...
g++ -I "%BOOST_PATH%" "%~1" -o "%~n1.exe"

if %errorlevel% equ 0 (
    echo ¡Compilación exitosa!
    echo Ejecutando %~n1.exe...
    echo.
    "%~n1.exe"
) else (
    echo Error en la compilación
)

pause