#include "Fixed.class.hpp"
#include <iostream>

Fixed::Fixed ()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed (Fixed const &input)
{
    std::cout << "Copy constructor called" << std::endl;
    this->value = input.getRawBits();
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
    this->value = f.getRawBits();
    return (*this);
}

Fixed::~Fixed ()
{
    std::cout << "Destructor called" << std::endl;
}
