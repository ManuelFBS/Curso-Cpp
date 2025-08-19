#include <iostream>
#include <windows.h>

using namespace std;

int main() {
        SetConsoleOutputCP(65001);

        // for (int i = 1; i <= 3; i++)
        // {
        //         cout << '\n'
        //              << "Feliz año nuevo 2026 !!!" << '\n'
        //              << endl;
        // }

        int number;

        cout << "\n\n"
             << "Introduzca un número para generar su tabla de multiplicar respectiva: ";
        cin >> number;
        cout << '\n'
             << " ******* Tabla del número " << number << " *******" << "\n\n";

        /* ***** TABLA DE MULTIPLICAR (number) ***** */
        // const int TWO = 2;
        string emptySpaces = string(12, ' ');
        string uniqueSpace = string(1, ' ');

        // cout << "\n\n\n";
        // cout << " *** Tabla de Multiplicar del 2 ***" << "\n\n";
        for (int i = 0; i <= 10; i++) {
                if (i < 10) {
                        cout << emptySpaces << number << " x " << uniqueSpace << i << " = " << number * i << '\n';
                } else {
                        cout << emptySpaces << number << " x " << i << " = " << number * i << '\n';
                }
        }

        cout << endl;

        return 0;
}