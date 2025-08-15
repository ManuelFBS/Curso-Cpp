#include <iostream>
#include <cmath>

int main() {
        double ladoA;
        double ladoB;
        double hipotenusa;

        std::cout << "Calculo de la Hipotenusa de un Triangulo Rectangulo" << '\n'
                  << '\n';

        std::cout << "Introduzca valor del cateto 'a': ";
        std::cin >> ladoA;
        std::cout << "Introduzca valor del cateto 'b': ";
        std::cin >> ladoB;

        hipotenusa = sqrt(pow(ladoA, 2) + pow(ladoB, 2));

        std::cout << '\n'
                  << "Hipotenusa = " << hipotenusa;

        return 0;
}