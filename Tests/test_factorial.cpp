#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>

using namespace boost::multiprecision;
using namespace std;

int main()
{
        cpp_int num = 1;

        for (int i = 1; i <= 50; i++)  // ¡Probamos con 50!
        {
                num *= i;
                cout << i << "! = " << num << "\n\n";
        }

        return 0;
}