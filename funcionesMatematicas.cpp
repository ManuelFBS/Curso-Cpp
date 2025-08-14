#include <iostream>

int main()
{
        double a = 3;
        double b = 4;
        double c;
        //
        double e = 37;
        double f = 16;
        double g;

        c = std::max(a, b); // El mayor de 2 nros...
        g = std::min(e, f); // El menor de nros...

        std::cout << "El nro mayor entre " << a << " y " << b << " es " << c << '\n'
                  << '\n';
        std::cout << "El nro menor entre " << e << " y " << f << " es " << g;

        return 0;
}