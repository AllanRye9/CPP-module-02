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
    Fixed(const Fixed& obj);
    ~Fixed();
    Fixed &operator = (Fixed const& src);
    std::ostream&   operator << (std::ostream& a, const Fixed &obj1);
    int             toInt( void ) const;
    float           toFloat( void ) const;
    int		        getRawBits() const;
	void	        setRawBits(int const raw);
};