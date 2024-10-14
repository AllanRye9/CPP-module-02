#pragma once
#include <iostream>

class   Fixed
{
private:
    int                 _value;
public:
    static const int    frac_bits;
    Fixed();
    Fixed(const Fixed &Data);
    Fixed &operator = (Fixed const& src);
    int getRawBits( void ) const;
    void setRawBits(const Fixed raw );
    ~Fixed();
};