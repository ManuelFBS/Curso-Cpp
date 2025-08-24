/* Funciones de recursividad. */
// Función para calcular el factorial de un número...
#include <math.h>
#include <windows.h>

#include <iostream>
#include <limits>  // Para limpiar el buffer de entrada...

using namespace std;

// Declaración de funciones...
long factorial(long n);
void setColor(int color);
void clearScreen();
void clearInputBuffer();
bool isValidNumber(long numb);

int main()
{
        SetConsoleOutputCP(65001);
        SetConsoleCP(65001);

        long number;
        long factorialNum;
        char resp = 'S';

        clearScreen();

        setColor(14);
        cout << '\n' << " ******* FACTORIAL DE UN NUMERO *******" << "\n\n";
        setColor(7);

        do
        {
                cout << "Introduzca un número (entero), para calcular su "
                        "factorial: ";
                // cin >> number;
                //
                while (!(cin >> number) || !isValidNumber(number))
                {
                        setColor(12);
                        cout << '\n'
                             << "Error: Ingrese un valor válido [mayor a 0]: ";
                        setColor(7);

                        clearInputBuffer();
                }
                //
                factorialNum = factorial(number);
                cout << "\n\n" << number << "! = " << factorialNum << "\n\n";

                cout << "Desea calcular otro factorial ['s' para continuar]? ";
                cin >> resp;
                if (resp == 'S' || resp == 's')
                {
                        clearScreen();

                        setColor(14);
                        cout << '\n'
                             << " ******* FACTORIAL DE UN NUMERO *******"
                             << "\n\n";
                        setColor(7);
                }
                else
                {
                        clearScreen();

                        setColor(9);
                        cout << "\n\n"
                             << "Gracial por usar la calculadora de "
                                "Factoriales...!!!"
                             << '\n';
                        cout << "Hasta la próxima !!!" << '\n' << endl;
                        setColor(7);
                }
        } while (resp == 'S' || resp == 's');

        return 0;
}

long factorial(long number)
{
        if (number > 1)
                return (number * factorial(number - 1));
        else
                return 1;
}

void setColor(int color)
{
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
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

bool isValidNumber(long numb) { return !isnan(numb) && numb >= 0; }