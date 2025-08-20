#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
        // Configurar codificación de entrada y salida a UTF-8
        SetConsoleOutputCP(65001);  // Salida UTF-8
        SetConsoleCP(65001);        // Entrada UTF-8
    
        // También configurar el modo de la consola para mejor soporte UTF-8
        //     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        //     SetConsoleMode(hConsole, ENABLE_VIRTUAL_TERMINAL_PROCESSING);

        string str;

        do {
                cout << "\n\n"
                << "Ingrese un texto: ";
                getline(cin, str);
                
                cout << '\n'
                << "Ud ingresó: " << str << '\n';
        } while (str != "bye");

        return 0;
}