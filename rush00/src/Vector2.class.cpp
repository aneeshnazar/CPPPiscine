#include <Vector2.class.hpp>

Vector2::Vector2 (){}
Vector2::Vector2 (Vector2 const &cc)
{
    *this = cc;
}
Vector2::Vector2 (double _theta, double _mag)
{
    theta = _theta;
    magnitude = _mag;
}
Vector2::~Vector2 (){}
Vector2 &Vector2::operator=(Vector2 const &input)
{
    this->theta = input.theta;
    this->magnitude = input.magnitude;
    return (*this);
}
void Vector2::setAngle(double _theta){theta = _theta;}
void Vector2::setMag(double _mag){magnitude = _mag;}

double Vector2::getTheta(void) const {return theta;}
double Vector2::getMagnitude(void) const {return magnitude;}
