/*
Celsius a Fahrenheit: F = (C * 1.8) + 32

Fahrenheit a Celsius: C = (F - 32) / 1.8
*/

/* Conversión de grados Celsius a Fahrenheit y viceversa */
#include <math.h>
#include <windows.h>
//
#include <iostream>
#include <limits>  // Para limpiar el buffer de entrada...

using namespace std;
string emptySpaces = string(12, ' ');
string uniqueSpace = string(1, ' ');

void setColor(int color)
{
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

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

bool isValidDegree(double deg)
{
        return !isnan(deg) && !isinf(deg) && deg >= -10000.0 && deg <= 10000.0;
}

void clearScreen()
{
#ifdef _WIN32
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
        char symbol = 'X';
        double degrees = 0;
        double convertedDegrees = 0;

        cout << "\n\n"
             << " ******* CONVERSION DE TEMPERATURAS *******" << "\n\n";

        cout << "Convertir Grados Celsius a Fahrenheit ['F']" << '\n';
        cout << "Convertir Grados Fahrenheit a Celsius ['C']" << '\n';

        cout << "Seleccione una opción: ";
        do
        {
                // Validar la opción seleccionada...
                while (!(cin >> opt) ||
                       (toupper(opt) != 'F' && toupper(opt) != 'C'))
                {
                        setColor(12);
                        cout << '\n'
                             << "Entrada inválida. Ingrese una opción ['F' o "
                                "'C']: ";
                        setColor(7);

                        clearInputBuffer();
                }

                if (toupper(opt) == 'F')
                {
                        symbol = 'C';
                }
                else if (toupper(opt) == 'C')
                {
                        symbol = 'F';
                }
                //
                cout << "\n\n"
                     << "Introduzca los °" << symbol << ": ";
                while (!(cin >> degrees) || !isValidDegree(degrees))
                {
                        setColor(12);
                        cout << '\n'
                             << "Error: Ingrese un valor válido [-10000.0 -- "
                                "10000.0]: ";
                        setColor(7);

                        clearInputBuffer();
                }

                if (toupper(opt) == 'F')
                {
                        convertedDegrees = degrees_Fahrenheit(degrees);
                }
                else if (toupper(opt) == 'C')
                {
                        convertedDegrees = degrees_Celsius(degrees);
                }
                cout << "\n\n"
                     << convertedDegrees << "°" << (char)toupper(opt) << endl;

                cout << "\n\n" << "Desea hacer alguna otra conversión? ";
                cin >> resp;

                clearInputBuffer();

                // Limpiar el buffer de entrada antes de preguntar por limpiar
                // pantalla...
                if (resp == 's' || resp == 'S')
                {
                        clearScreen();

                        cout << "\n\n"
                             << " ******* CONVERSION DE TEMPERATURAS *******"
                             << "\n\n";

                        cout << "Convertir Grados Celsius a Fahrenheit ['F']"
                             << '\n';
                        cout << "Convertir Grados Fahrenheit a Celsius ['C']"
                             << '\n';

                        cout << "Seleccione una opción: ";
                }
        } while (resp == 's' || resp == 'S');

        clearScreen();

        cout << "\n\n"
             << "Gracias por usar el Conversor de Temperaturas...!" << "\n\n";
        cout << "Hasta la próxima !!!" << endl;

        return 0;
}