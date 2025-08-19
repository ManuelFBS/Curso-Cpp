#include <iostream>
#include <windows.h>

int main() {
        SetConsoleOutputCP(65001);

        int number;

        do {
                std::cout << "\n"
                          << "Introduzca un número entero positivo: ";
                std::cin >> number;
        } while (number < 0);

        std::cout << "\n\n"
                  << "El número introducido es: " << number << '\n'
                  << std::endl;

        return 0;
}