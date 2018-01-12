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

Fixed Fixed::operator+(Fixed const &f1)
{
    return (Fixed (this->value + f1.value));
}

Fixed Fixed::operator-(Fixed const &f1)
{
    return (Fixed (this->value - f1.value));
}

Fixed Fixed::operator*(Fixed const &f1)
{
    return (Fixed (this->toFloat() * f1.toFloat()));
}

Fixed Fixed::operator/(Fixed const &f1)
{
    return (Fixed (this->toFloat() * f1.toFloat()));
}

Fixed &Fixed::operator++()
{
    this->value += 1;
    return(*this);
}

Fixed &Fixed::operator--()
{
    this->value -= 1;
    return(*this);
}

Fixed Fixed::operator++(int input)
{
    Fixed out(*this);
    (void) input;
    this->value += 1;
    return(out);
}

Fixed Fixed::operator--(int input)
{
    Fixed out(*this);
    (void) input;
    this->value -= 1;
    return(out);
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
    return ((f1 < f2) ? f1 : f2);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
    return ((f1 >= f2) ? f1 : f2);
}

bool Fixed::operator==(Fixed const &f1)
{
    return (this->toFloat() == f1.toFloat());
}

bool Fixed::operator!=(Fixed const &f1)
{
    return (this->toFloat() != f1.toFloat());
}

bool Fixed::operator>=(Fixed const &f1)
{
    return (this->toFloat() >= f1.toFloat());
}

bool Fixed::operator<=(Fixed const &f1)
{
    return (this->toFloat() <= f1.toFloat());
}

bool Fixed::operator>(Fixed const &f1)
{
    return (this->toFloat() > f1.toFloat());
}

bool Fixed::operator<(Fixed const &f1)
{
    return (this->toFloat() < f1.toFloat());
}

std::ostream &operator<<(std::ostream &o, const Fixed &f)
{
    o << f.toFloat();
    return (o);
}

Fixed const &Fixed::min(Fixed const &f1, Fixed const &f2)
{
    return ((f1.toFloat() < f2.toFloat()) ? f1 : f2);
}

Fixed const &Fixed::max(Fixed const &f1, Fixed const &f2)
{
    return ((f1.toFloat() >= f2.toFloat()) ? f1 : f2);
}
