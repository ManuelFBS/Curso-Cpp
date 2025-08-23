/* Funciones con valores predeterminados en o algunos de sus parámetros. */
#include <iostream>
using namespace std;

int multiply(int a, int b = 3)
{
        int result;
        result = a * b;

        return result;
}

int main()
{
        cout << multiply(15) << '\n';
        cout << multiply(12, 5) << '\n' << endl;

        return 0;
}