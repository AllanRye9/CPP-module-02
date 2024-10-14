#pragma once
#include <iostream>
#include <cmath>

class   Fixed
{
private:
    float                _value;
public:
    static const int    frac_bits;
    Fixed();
    Fixed(const float num);
    Fixed(const int num);
    Fixed(Fixed& obj);
    float operator << (const float num);
    float toFloat( void ) const;
    int toInt( void ) const;
    ~Fixed();
};