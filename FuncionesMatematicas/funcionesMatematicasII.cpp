#include <iostream>
#include <stdio.h>
#include <cmath>

#define PI 3.14159265

int main()
{
        double u = 3.1187;
        double v = 7.8778;
        double x = 8;
        double y = 17;
        double z;
        double ang;
        double sine;

        // z = std::max(x, y); // ----> El mayor de 2 números...
        // z = std::min(x, y); // ----> El menor de 2 números...
        // z = std::pow(2, 5); // ----> pow(x, y) donde 'x' es elevado a 'y'...
        // z = std::sqrt(9); // ----> Raíz cuadrada de un número...
        // z = std::abs(-1351); // ----> Valor absoluto de un úmero...
        // z = std::round(u); // ----> Redondea el valor al siguiente más cercano (bien hacia arriba o hacia abajo...)
        // z = std::round(v); // ----> Redondea el valor al siguiente más cercano (bien hacia arriba o hacia abajo...)
        // z = std::ceil(u);  // ----> Redondea el valor al más próximo (hacia arriba)...
        // z = std::floor(v); // ----> Redondea el valor al más próximo (hacia abjo)...

        // std::cout << z;

        std::cout << "Introduzca el valor del angulo para calcular su 'seno': ";
        std::cin >> ang;

        sine = sin(ang * PI / 180);

        // std::cout << '\n' << "El seno de %f" << ang << " = %f" << seno;
        printf("El seno of %f grados es %f.\n", ang, sine);

        return 0;
}