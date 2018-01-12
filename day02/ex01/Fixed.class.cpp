#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed ()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed (Fixed const &input)
{
    std::cout << "Copy constructor called" << std::endl;
    this->value = input.value;
}


Fixed::Fixed (int num)
{
    std::cout << "Int constructor called" << std::endl;
    value = num << fract;
}

Fixed::Fixed (float num)
{
    std::cout << "Float constructor called" << std::endl;
    value = roundf(num * (1 << fract));
}

float Fixed::toFloat(void) const
{
    return ((float)value / (1 << fract));
}

int Fixed::toInt(void) const
{
    return (value >> fract);
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (value);
}

void Fixed::setRawBits( int const raw )
{
    value = raw;
}

Fixed   &Fixed::operator=(Fixed const &f)
{
    std::cout << "Assignation operator called" << std::endl;
    this->value = f.value;
    return (*this);
}

Fixed::~Fixed ()
{
    std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &o, const Fixed &f)
{
    o << f.toFloat();
    return (o);
}
