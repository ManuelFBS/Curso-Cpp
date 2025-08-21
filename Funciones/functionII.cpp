/*
 * Ejemplo de una función generadora de una tabla de multiplicar
 * de acuerdo a un número suministrado por parámetro...
 */
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

void setColor(int color)
{
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void tableGenerator(int number)
{
        int result = 0;

        setColor(14);
        cout << "\n\n"
             << "******* TABLA DE MULTIPLICAR DEL ";
        setColor(4);
        cout << number;
        setColor(14);
        cout << " *******"
             << "\n\n";
        setColor(7);

        for (int i = 0; i <= 10; i++)
        {
                result = number * i;
                //
                if (i < 10)
                {
                        cout << emptySpaces << number << " x " << uniqueSpace
                             << i << " = " << result << '\n';
                }
                else
                {
                        cout << emptySpaces << number << " x " << i << " = "
                             << result << '\n';
                }
        }

        cout << '\n' << endl;
}

void clearScreen()
{
#ifdef _WIN32
        system("cls");  // Para Windows...
#else
        system("clear");  // Para Linux / Mac...
#endif
}

void clearInputBuffer()
{
        cin.clear();  // Limpia flags de error...
        cin.ignore(numeric_limits<streamsize>::max(),
                   '\n');  // Limpia el buffer...
}

int main()
{
        SetConsoleOutputCP(65001);

        int n;
        char resp = 's';

        setColor(9);
        cout << "\n\n"
             << "***** GENERADOR DE TABLAS DE MULTIPLICACION *****"
             << "\n\n";
        setColor(7);

        do
        {
                cout << "Ingrese un número [del 1 al 10] para generar "
                        "la "
                        "respectiva "
                        "tabla de multiplicar: ";
                // Validar entrada numérica...
                while (!(cin >> n) || n < 1 || n > 10)
                {
                        setColor(12);
                        cout << "Entrada inválida. Ingrese un número del 1 al "
                                "10: ";
                        setColor(7);

                        clearInputBuffer();
                }

                tableGenerator(n);

                cout << "Desea generar alguna otra tabla ['s' para "
                        "continuar]? ";
                cin >> resp;

                clearInputBuffer();

                // Limpiar el buffer de entrada antes de preguntar por limpiar
                // pantalla...
                if (resp == 's' || resp == 'S')
                {
                        clearScreen();
                        // Volver a mostrar el título después de limpiar...
                        setColor(9);
                        cout << "\n\n"
                             << "***** GENERADOR DE TABLAS DE MULTIPLICACION "
                                "*****"
                             << "\n\n";
                        setColor(7);
                }
        } while (resp == 's' || resp == 'S');

        cout << "Gracias por usar el generador de tablas..." << "\n\n";
        cout << "Hasta la próxima !!!" << endl;

        return 0;
}