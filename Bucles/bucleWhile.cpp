/* ********************** BUCLE WHILE ********************** */

// #include <cstdio>
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
        SetConsoleOutputCP(65001);

        // char name[100] = ""; // Tamaño fijo (se puede ajustar según necesidad)

        // while (name[0] == '\0') { // Verifica si el primer carácter es nulo
        //         printf("Ingrese su nombre: ");
        //         scanf("%99s", name); // Limita la lectura para evitar desbordamiento
        // }

        // printf("El nombre ingresado es: %s\n", name);

        string name;

        while (true)
        {
                std::cout << "Ingrese su nombre: ";
                if (std::getline(std::cin,name) && !name.empty()) {
                        break;
                }
                std::cout << "ERROR: El nombre NO puede estar vacío...\n";
        }

        std::cout << "\n"
                  << "El nombre ingresado es: " << name << std::endl;
        
        return 0;
}