#include <Position.class.hpp>

Position::Position (){}
Position::Position (double x, double y)
{
    _x = x;
    _y = y;
}
Position::Position (Position const &cc)
{
    *this = cc;
}
Position::~Position (){}
Position &Position::operator=(Position const &input)
{
    _x = input._x;
    _y = input._y;
    return (*this);
}
double  Position::getX() const {return _x;}
double  Position::getY() const {return _y;}
void    Position::setX(double x){ _x = x;}
void    Position::setY(double y){ _y = y;}
