#include "Fixed.hpp"

const int    Fixed::frac_bits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" <<std::endl;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" <<std::endl;
}

Fixed::Fixed(Fixed& obj)
{
    std::cout << "Copy constructor called" <<std::endl;
}

float Fixed::operator << (const float num)
{
    std::cout << "Copy assignment operator called" <<std::endl;
}

float Fixed::toFloat( void ) const
{
    std::cout << "float function" <<std::endl;
}

int Fixed::toInt( void ) const
{
    std::cout << "integer function" <<std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}