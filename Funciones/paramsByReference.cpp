/* Parámetros pasados por referencia en una función */
#include <iostream>
using namespace std;

void duplicate(int& a, int& b, int& c)
{
        a *= 2;
        b *= 2;
        c *= 2;
}

int main()
{
        int x = 1, y = 4, z = 14;

        duplicate(x, y, z);

        cout << '\n' << "x = " << x << '\n';
        cout << '\n' << "y = " << y << '\n';
        cout << '\n' << "z = " << z << '\n';
        cout << endl;

        return 0;
}