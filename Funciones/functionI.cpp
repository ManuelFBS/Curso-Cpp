/*  Ejemplo de una función  */
#include <iostream>
using namespace std;

int addition(int a, int b)
{
        int result;

        result = a + b;

        return result;
}

int main()
{
        int z;

        z = addition(7, 13);
        cout << '\n' << "El resultado es: " << z << '\n' << endl;

        return 0;
}