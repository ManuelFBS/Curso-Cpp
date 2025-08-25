/* Funciones de recursividad. */
// Función para calcular el factorial de un número...
#include <math.h>
#include <windows.h>

#include <boost/multiprecision/cpp_int.hpp>
#include <iomanip>
#include <iostream>
#include <limits>  // Para limpiar el buffer de entrada...
#include <locale>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
using namespace boost::multiprecision;

// Declaración de funciones...
// long factorial(long n);
cpp_int factorial(cpp_int n);
void setColor(int color);
void clearScreen();
void clearInputBuffer();
bool isValidNumber(cpp_int numb);
string formatNumberWithSeparators(const cpp_int& num);
string formatFactorialOutput(const cpp_int& num);

int main()
{
        SetConsoleOutputCP(65001);
        SetConsoleCP(65001);

        cpp_int number;
        cpp_int factorialNum;
        char resp = 'S';

        clearScreen();

        setColor(14);
        cout << '\n' << " ******* FACTORIAL DE UN NUMERO *******" << "\n\n";
        setColor(7);

        do
        {
                cout << "Introduzca un número (entero), para calcular su "
                        "factorial: ";
                //
                // Leer como long temporal y luego convertir a cpp_int...
                long tempNumb;
                while (!(cin >> tempNumb) || !isValidNumber(tempNumb))
                {
                        setColor(12);
                        cout << '\n'
                             << "Error: Ingrese un valor válido [mayor a 0]: ";
                        setColor(7);

                        clearInputBuffer();
                }
                number = tempNumb;  // Convertir a cpp_int...
                //
                factorialNum = factorial(number);
                cout << "\n\n"
                     << number << "! = " << formatFactorialOutput(factorialNum)
                     << "\n\n";

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

// Función para calcular el factorial de un número...
cpp_int factorial(cpp_int n)
{
        if (n > 1)
                return (n * factorial(n - 1));
        else
                return 1;
}

// Función para agregar separadores de miles...
string formatNumberWithSeparators(const cpp_int& num)
{
        string numStr = num.str();
        int n = numStr.length();
        string result;

        for (int i = 0; i < n; i++)
        {
                if (i > 0 && (n - i) % 3 == 0)
                {
                        result += ".";
                }
                result += numStr[i];
        }

        return result;
}

// Función para determinar el formato de salida...
string formatFactorialOutput(const cpp_int& num)
{
        string numStr = num.str();

        if (numStr.length() <= 12)
        {
                // Menos de 12 cifras: usar separadores de miles...
                return formatNumberWithSeparators(num);
        }
        else
        {
                // Más de 12 cifras: usar notación científica...
                stringstream ss;

                ss << scientific << setprecision(6) << num.convert_to<double>();
                return ss.str();
        }
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

bool isValidNumber(cpp_int numb) { return numb >= 0; }