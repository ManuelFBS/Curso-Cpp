/* Funciones declaradas (para ser llamadas despues de 'main'). */
#include <windows.h>

#include <iostream>
using namespace std;

void odd(int x);
void even(int x);

int main()
{
        SetConsoleOutputCP(65001);
        SetConsoleCP(65001);

        int i;

        do
        {
                cout << '\n'
                     << "Por favor, introduzca un número [0 para salir]: ";
                cin >> i;

                if (i != 0)
                        odd(i);
                else
                        cout << "\n" << "Hasta la próxima !!!" << '\n' << endl;
        } while (i != 0);

        return 0;
}

/*
 * Las siguientes funciones, para poder ser colocadas después del 'main' y
 * puedan ser llamadas, deben ser declaradas previamente (antes del 'main')...
 */
void odd(int x)
{
        if ((x % 2) != 0)
                cout << "Es extraño...!";
        else
                even(x);
}

void even(int x)
{
        if ((x % 2) == 0)
                cout << "Es parejo...!";
        else
                odd(x);
}