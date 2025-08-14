#include <iostream>

namespace primera
{
        int x = 7;
}

namespace segunda
{
        int x = 19;
}

int main()
{
        int x = 33;

        std::cout << "Valor de 'x' (Local): " << x << '\n';
        std::cout << "Valor de 'x' (segunda): " << segunda::x << '\n';
        std::cout << "Valor de 'x' (primera): " << primera::x;

        return 0;
}