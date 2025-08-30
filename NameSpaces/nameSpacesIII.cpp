/* Versión modificada y reducida es funcional... */
#include <windows.h>

#include <boost/math/constants/constants.hpp>
#include <boost/multiprecision/cpp_dec_float.hpp>
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

        cout << "π - precisión 5 dígitos (por medio de 'Boost'): "
             << setprecision(6) << pi_val << "\n";
        cout << "π - precisión 10 dígitos (por medio de 'Boost'): "
             << setprecision(11) << pi_val << "\n";
        cout << "π - precisión 20 dígitos (por medio de 'Boost'): "
             << setprecision(21) << pi_val << "\n";
        cout << "π - precisión 30 dígitos (por medio de 'Boost'): "
             << setprecision(31) << pi_val << "\n";

        cout << "π - precisión 5 dígitos (por medio del 'ArcoTangente'): "
             << setprecision(6) << pi_val_ByAtn << '\n';
        cout << "π - precisión 10 dígitos (por medio del 'ArcoTangente'): "
             << setprecision(11) << pi_val_ByAtn << '\n';
        cout << "π - precisión 20 dígitos (por medio del 'ArcoTangente'): "
             << setprecision(21) << pi_val_ByAtn << '\n';
        cout << "π - precisión 30 dígitos (por medio del 'ArcoTangente'): "
             << setprecision(31) << pi_val_ByAtn << '\n';

        return 0;
}

cpp_dec_float_50 PI_Calculate()
{
        cpp_dec_float_50 pi_val_ByAtn = 4 * atan(1);
        return pi_val_ByAtn;
}