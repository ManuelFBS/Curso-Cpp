/*
Celsius a Fahrenheit: F = (C * 1.8) + 32

Fahrenheit a Celsius: C = (F - 32) / 1.8
*/

/* Conversión de grados Celsius a Fahrenheit y viceversa */
#include <windows.h>

#include <iostream>
#include <limits>  // Para limpiar el buffer de entrada...

using namespace std;
string emptySpaces = string(12, ' ');
string uniqueSpace = string(1, ' ');

double degrees_Fahrenheit(double degrees)
{
        double fahrenheit = 0;

        fahrenheit = (degrees * 1.8) + 32;

        return fahrenheit;
}

double degrees_Celsius(double degrees)
{
        double celsius;

        celsius = (degrees - 32) / 1.8;

        return celsius;
}

void clearScreen()
{
#ifdef _WIN
        system("cls");  // Para Windows...
#else
        system("clear");  // Para Linux / Mac...
#endif
}

void clearInputBuffer()
{
        cin.clear();  // Limpia los flags de error...
        cin.ignore(numeric_limits<streamsize>::max(),
                   '\n');  // Limpia el buffer...
}

int main()
{
        SetConsoleOutputCP(65001);

        char resp = 's';
        char opt = 'N';
        double degrees = 0;
        double convertedDegrees = 0;

        do
        {
                cout << "\n\n"
                     << " ******* CONVERSION DE TEMPERATURAS *******" << "\n\n";

                cout << "Convertir Grados Celsius a Fahrenheit ['F']" << '\n';
                cout << "Convertir Grados Fahrenheit a Celsius ['C']" << '\n';

                cout << "Seleccione una opción: ";
                cin >> opt;
                //
                cout << "\n\n"
                     << "Introduzca los °" << (char)toupper(opt) << " ";
                cin >> degrees;
                //
                if (opt == 'F' || opt == 'f')
                {
                        convertedDegrees = degrees_Fahrenheit(degrees);
                }

                cout << "\n\n" << "Desea hacer alguna otra conversión? ";
                cin >> resp;

        } while (resp == 's' || resp == 'S');

        return 0;
}