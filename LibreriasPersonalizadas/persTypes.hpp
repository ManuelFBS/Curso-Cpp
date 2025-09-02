#pragma once
#include <boost/multiprecision/cpp_dec_float.hpp>

using namespace boost::multiprecision;

// Alias para diferentes precisiones...
using Dec5 = number<boost::multiprecision::cpp_dec_float<5>>;
using Dec10 = number<boost::multiprecision::cpp_dec_float<10>>;
using Dec20 = number<boost::multiprecision::cpp_dec_float<20>>;
using Dec30 = number<boost::multiprecision::cpp_dec_float<30>>;
using Dec40 = number<boost::multiprecision::cpp_dec_float<40>>;
using Dec50 = cpp_dec_float_50;
using Dec100 = cpp_dec_float_100;