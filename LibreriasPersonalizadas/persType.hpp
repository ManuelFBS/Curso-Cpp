/* persType.hpp - Librería personalizada con tipos de datos... */
#ifndef PERS_TYPE_HPP  // Include guard - evita inclusiones múltiples...
#define PERS_TYPE_HPP

#include <boost/math/constants/constants.hpp>
#include <boost/multiprecision/cpp_dec_float.hpp>

// Namespace personalizado para evitar colisiones...
namespace mfbs
{
// Alias para tipos de precisión decimal...
using Decimal10 = boost::multiprecision::cpp_dec_float<10>;
using Decimal20 = boost::multiprecision::cpp_dec_float<20>;
using Decimal30 = boost::multiprecision::cpp_dec_float<30>;
using Decimal40 = boost::multiprecision::cpp_dec_float<40>;
using Decimal50 = boost::multiprecision::cpp_dec_float<50>;
using Decimal100 = boost::multiprecision::cpp_dec_float<100>;

// Alias para constantes matemáticas...
template <typename T>
using Pi = decltype(boost::math::constants::pi<T>());

template <typename T>
using E = decltype(boost::math::constants::e<T>());

// Alias para aplicaciones específicas...
using FinancialPrecision = Decimal20;
using EngineeringPrecision = Decimal30;
using ScientificPrecision = Decimal50;
using AstrophysicalPrecision = Decimal100;

// Función personalizada para calcular π...
template <typename T>
T calculatePI()
{
        return boost::math::constants::pi<T>();
}

// Función personalizada para calcular 'e'...
template <typename T>
T calculateE()
{
        return boost::math::constants::e<T>();
}
}  // namespace mfbs

#endif  // PERS_TYPE_HPP