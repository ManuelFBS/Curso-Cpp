#include <windows.h>
//
#include <boost/math/special_functions/atanh.hpp>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <iomanip>
#include <iostream>

using namespace boost::multiprecision;
using namespace boost::math;
using namespace std;

namespace CalculoPrecisoPI
{
// Template para cálculo preciso con arctan
template <int Decimales>
cpp_dec_float<Decimales> calcularPIconArctan()
{
        using precision_type = cpp_dec_float<Decimales>;

        // 4 * atan(1) con alta precisión
        precision_type uno = 1;
        return 4 * atan(uno);
}

// Comparación con el valor de Boost
template <int Decimales>
void compararMetodos()
{
        using precision_type = cpp_dec_float<Decimales>;

        precision_type pi_arctan = calcularPIconArctan<Decimales>();
        precision_type pi_boost = constants::pi<precision_type>();

        cout << "Precisión: " << Decimales << " decimales" << endl;
        cout << "π con arctan(1): " << setprecision(Decimales + 1) << pi_arctan
             << endl;
        cout << "π de Boost:      " << setprecision(Decimales + 1) << pi_boost
             << endl;
        cout << "Diferencia:      " << (pi_arctan - pi_boost) << endl;
        cout << "----------------------------------------" << endl;
}
}  // namespace CalculoPrecisoPI

int main()
{
        SetConsoleOutputCP(65001);

        cout << "=== COMPARACIÓN DE MÉTODOS ===" << endl;

        CalculoPrecisoPI::compararMetodos<10>();
        CalculoPrecisoPI::compararMetodos<20>();
        CalculoPrecisoPI::compararMetodos<30>();

        return 0;
}