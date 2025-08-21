/* Bucle for: range-based loop */
#include <iostream>
#include <string>
using namespace std;

int main()
{
        string str{"Hello!"};

        cout << '\n';

        for (char c : str)
        {
                cout << "[" << c << "]";
        }

        cout << "\n\n";

        return 0;
}