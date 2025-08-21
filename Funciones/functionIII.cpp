/*
Celsius a Fahrenheit: F = (C * 1.8) + 32

Fahrenheit a Celsius: C = (F - 32) / 1.8
*/

/* Conversión de grados Celsius a Fahrenheit y viceversa */
#include <windows.h>

#include <iostream>
#include <limits>  // Para limpiar el buffer de entrada...

using namespace std;
string emptySpaces = string(12, ' ');
string uniqueSpace = string(1, ' ');

// Colores básicos...
#define COLOR_ROJO 4
#define COLOR_AZUL 1
#define COLOR_VERDE 2
#define COLOR_AMARILLO 6
#define COLOR_MAGENTA 5
#define COLOR_CIAN 3
#define COLOR_BLANCO 7
#define COLOR_NEGRO 0

// Colores intensos...
#define COLOR_ROJO_INTENSO 12
#define COLOR_AZUL_INTENSO 9
#define COLOR_VERDE_INTENSO 10
#define COLOR_AMARILLO_INTENSO 14
#define COLOR_MAGENTA_INTENSO 13
#define COLOR_CIAN_INTENSO 11
#define COLOR_BLANCO_INTENSO 15

double degrees_Fahrenheit(double degrees)
{
        double fahrenheit = 0;

        fahrenheit = (degrees * 1.8) + 32;

        return fahrenheit;
}

double degrees_Celsius(double degrees)
{
        double celsius;

        celsius = (degrees - 32) / 1.8;

        return celsius;
}

int main() {}