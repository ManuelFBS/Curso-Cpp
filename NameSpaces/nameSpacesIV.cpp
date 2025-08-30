/*
 * Versión modificada con respecto a "nameSpacesIII.cpp" con
 * la finalidad de poder observar más detalladamente la difderencia
 * entre los tipos de precisiones de Boost y el método del cálculo por
 * medio del Arcontangente de 1...
 */
#include <windows.h>

#include <boost/math/constants/constants.hpp>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;
using namespace boost::multiprecision;
using namespace boost::math::constants;

cpp_dec_float_50 PI_Calculate();

int main()
{
        SetConsoleOutputCP(65001);

        cpp_dec_float_50 pi_val = pi<cpp_dec_float_50>();
        cpp_dec_float_50 pi_val_ByAtn = PI_Calculate();
        cpp_dec_float_50 diference = pi_val - pi_val_ByAtn;

        cout << '\n' << "=== COMPARACIÓN DE MÉTODOS PARA CALCULAR π ===\n\n";

        cout << "π - ('Boost' - alta precisión):\n"
             << setprecision(51) << pi_val << "\n\n";

        cout << "π - ['4 * atan(1)' - precisión limitada]:\n"
             << setprecision(51) << pi_val_ByAtn << "\n\n";

        cout << "Diferencia: " << scientific << setprecision(15) << diference
             << '\n';
        cout << "Diferencia relativa: " << scientific << (diference / pi_val)
             << "\n\n";

        cout << "=== PRECISIONES COMPARATIVAS ===\n";
        for (int precision : {5, 10, 15, 20, 25, 30})
        {
                cout << "Precisión " << precision << " dígitos:\n";
                cout << "  Boost: " << setprecision(precision + 1) << pi_val
                     << "\n";
                cout << "  Atan:  " << setprecision(precision + 1)
                     << pi_val_ByAtn << "\n";
                cout << "  Iguales hasta dígito " << precision << ": "
                     << boolalpha
                     << (fabs(pi_val - pi_val_ByAtn) < pow(10, -precision))
                     << "\n\n";
        }

        return 0;
}

cpp_dec_float_50 PI_Calculate()
{
        cpp_dec_float_50 pi_val_ByAtn = 4 * atan(1);
        return pi_val_ByAtn;
}