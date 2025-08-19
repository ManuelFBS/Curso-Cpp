#include <iostream>

using std::cout;

int main()
{
        int estudiantes = 20;

        // SUMA...
        // estudiantes = estudiantes + 1;
        // estudiantes += 1; // Equivale a 'estudiantes = estudiantes + 1'...
        // estudiantes++; // Equivale a 'estudiantes = estudiantes + 1'...
        estudiantes++; // Equivale a 'estudiantes = estudiantes + 1'...

        cout << estudiantes << " [ Incremento ]" << '\n';

        // RESTA...
        // estudiantes = estudiantes - 1;
        // estudiantes -= 1; // Equivale a 'estudiantes = estudiantes - 1'...
        estudiantes--; // Equivale a 'estudiantes = estudiantes - 1'...

        cout << estudiantes << " [ Resta ]" << '\n';

        // MULTIPLICACION...
        // estudiantes = estudiantes * 2;
        estudiantes *= 2; // Equivale a 'estudiantes = estudiantes * 2'...

        cout << estudiantes << " [ Multiplicación ]" << '\n';

        // DIVISION...
        // estudiantes = estudiantes / 4;
        estudiantes /= 4; // Equivale a 'estudiantes = estudiantes / 4'...

        cout << estudiantes << " [ División ]" << '\n'
             << '\n';

        // MODULO...
        int modulo = estudiantes % 2;

        cout << "valor de estudiantes con módulo 2 = " << modulo;

        return 0;
}