#include <iostream>

int main()
{
        std::string nombre;
        int edad;

        std::cout << "Cual es tu nombre completo? ";
        // std::cin >> nombre;

        //* El uso de 'getline()' es para poder aceptar strings con espacios
        //* intrecalados, por ejemplo: "Juan Rojas"...
        std::getline(std::cin, nombre);

        std::cout << "Que edad tienes? ";
        std::cin >> edad;

        std::cout << "Hola " << nombre << '\n';
        std::cout << "Tu edad es: " << edad << " anyos...";

        return 0;
}