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

// // Alias para constantes matemáticas...
// template <typename T>
// using Pi = decltype(boost::math::constants::pi<T>());

// template <typename T>
// using E = decltype(boost::math::constants::e<T>());

// Alias para aplicaciones específicas...
using FinancialPrecision = Decimal20;
using EngineeringPrecision = Decimal30;
using ScientificPrecision = Decimal50;
using AstrophysicalPrecision = Decimal100;

// Funciones matemáticas...
template <typename T>
T pi()
{
        return boost::math::constants::pi<T>();
}

template <typename T>
T e()
{
        return boost::math::constants::e<T>();
}

// Funciones geométricas...
template <typename T>
T areaCircle(T radius)
{
        return pi<T>() * radius * radius;
}

template <typename T>
T volumeSphere(T radius)
{
        return (4.0 / 3.0) * pi<T>() * radius * radius * radius;
}
}  // namespace mfbs

#endif  // PERS_TYPE_HPP