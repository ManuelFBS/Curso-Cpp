#include <iostream>

int main()
{
        char score;

        std::cout << "Introduzca la calificacion: ";
        std::cin >> score;

        switch (score)
        {
        case 'A':
                std::cout << "Lo hiciste excelente !!!";
                break;
        case 'B':
                std::cout << "Lo hiciste muy bien !!!";
                break;
        case 'C':
                std::cout << "Lo hiciste bien !!!";
                break;
        case 'D':
                std::cout << "Tu ejecucion fue regular !!!";
                break;
        case 'E':
                std::cout << "Tu labor fue deficiente !!!";
                break;
        case 'F':
                std::cout << "Tu labor fue muy deficiente !!!";
                break;

        default:
                std::cout << "Debes introducir una calificacion valida !!!";
        }
}