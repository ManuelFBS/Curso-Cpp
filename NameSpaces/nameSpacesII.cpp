#include <windows.h>
//
#include <boost/math/constants/constants.hpp>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <iomanip>
#include <iostream>

using namespace boost::multiprecision;
using namespace boost::math::constants;

int main()
{
        SetConsoleOutputCP(65001);
        // SetConsoleCP(65001);

        // Definimos el tipo de precisión (50 decimales)
        using precision_type = cpp_dec_float_50;

        // Obtenemos π con alta precisión
        precision_type pi_boost = pi<precision_type>();

        std::cout << "π con Boost (50 decimales):" << std::endl;
        std::cout << std::setprecision(50) << pi_boost << std::endl;

        return 0;
}