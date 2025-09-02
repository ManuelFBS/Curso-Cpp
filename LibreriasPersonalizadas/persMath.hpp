#pragma once
#include "persTypes.hpp"

// Implementación de Pi (Gauss-Legendre simplificada)...
template <typename DecType>
DecType calcPi()
{
        return boost::math::constants::pi<DecType>();
}

// Implementación de 'e' (serie de Taylor)...
template <typename DecType>
DecType calcE()
{
        DecType e = 1;
        DecType fact = 1;

        for (int i = 1; i < 50; ++i)
        {
                fact *= i;
                e += DecType(1) / fact;
        }

        return e;
}

template <typename DecType>
DecType calcAreaOfCircle(const DecType& radius)
{
        return calcPi<DecType>() * radius * radius;
}

template <typename DecType>
DecType calcVolumeOfSphere(const DecType& radius)
{
        return (DecType(4) / DecType(3)) * calcPi<DecType>() * radius * radius *
               radius;
}