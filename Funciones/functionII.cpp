/*
 * Ejemplo de una función generadora de una tabla de multiplicar
 * de acuerdo a un número suministrado por parámetro...
 */
#include <windows.h>

#include <iostream>

using namespace std;

void tableGenerator(int number)
{
        int result = 0;

        cout << "\n\n" << "TABLA DE MULTIPLICAR DEL " << number << "\n\n";

        for (int i = 0; i <= 10; i++)
        {
                result = number * i;
                cout << number << " * " << i << " = " << result << '\n';
        }

        cout << '\n' << endl;
}

int main()
{
        SetConsoleOutputCP(65001);

        int n;

        cout << "\n\n"
             << "***** GENERADOR DE TABLAS DE MULTIPLICACION *****" << "\n\n";

        cout << "Ingrese un número [del 1 al 10] para generar la respectiva "
                "tabla de multiplicar: ";
        cin >> n;
        tableGenerator(n);

        return 0;
}