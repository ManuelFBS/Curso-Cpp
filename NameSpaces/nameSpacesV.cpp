/*
 * Versión modificada (o más bien, basado) respecto a "nameSpacesIV.cpp"
 * con la finlidad de crear alias (tipos definidos personalizados) a los tipos
 * de variables definidas en "boost::multiprecision" como el caso de
 * 'cpp_dec_float_50', 'cpp_dec_float_100' y algunos otros, con el propósito
 * de hacer más legible dichos tipos (y otros) mecionados...
 */
#include <windows.h>

#include <boost/math/constants/constants.hpp>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;
// using namespace boost::multiprecision;
using namespace boost::math::constants;

// Alias personalizados para los tipos de Boost...
using cppDecFloat50 = boost::multiprecision::cpp_dec_float_50;
using cppDecFloat100 = boost::multiprecision::cpp_dec_float_100;

// También se puede crear alias para funciones comunes...
template <typename T>
using Pi = decltype(pi<T>());

cppDecFloat50 PI_Calculate();

int main()
{
        SetConsoleOutputCP(65001);

        // Usando nuestros tipos personalizados...
        cppDecFloat50 pi_val = pi<cppDecFloat50>();
        cppDecFloat50 pi_val_ByAtn = PI_Calculate();
        cppDecFloat50 radio = 5.0;
        cppDecFloat50 area = pi_val * pow(radio, 2.0);

        // Usando el tipo de 100 dígitos...
        cppDecFloat100 pi_high = pi<cppDecFloat100>();

        cout << '\n' << "=== USO DE TIPOS PERSONALIZADOS ===\n\n";

        cout << "π (50 dígitos):\n" << setprecision(51) << pi_val << "\n\n";
        cout << "π (100 dígitos):\n" << setprecision(101) << pi_high << "\n\n";

        cout << "Area con radio " << radio << ": " << area << "\n\n";

        // Ejemplo con cálculos complejos...
        cppDecFloat50 result = (pi_val * 2) + (pi_val_ByAtn / 3);
        cout << "Cálculo complejo: " << result << '\n' << endl;

        return 0;
}

cppDecFloat50 PI_Calculate()
{
        cppDecFloat50 pi_val_ByAtn = 4 * atan(1);
        return pi_val_ByAtn;
}