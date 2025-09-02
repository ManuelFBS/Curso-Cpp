#include <windows.h>

#include <iomanip>
#include <iostream>

#include "../LibreriasPersonalizadas/persMath.hpp"
#include "../LibreriasPersonalizadas/persTypes.hpp"

using namespace std;

int main()
{
        SetConsoleOutputCP(65001);

        Dec10 radius;
        Dec10 area;
        Dec10 euler;

        cout << '\n'
             << " ******* CALCULO DEL AREA DE UN CIRCULO *******" << "\n\n";

        cout << "Ingrese el valor del radio del círculo: ";
        cin >> radius;

        area = calcAreaOfCircle(radius);
        cout << "\n\n" << "El área del círculo es: ";
        cout << fixed << setprecision(10) << area << "\n\n";

        cout << " _____________________________________________" << '\n';
        cout << "                 Número de Euler" << "\n\n";
        euler = calcE<Dec10>();
        cout << "Valor de Euler: ";
        cout << fixed << setprecision(10) << euler << '\n' << endl;

        return 0;
}