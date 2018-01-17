#include "../includes/PhysicalObject.class.hpp"

// Constructor Functions:

	// Default Constructor
APhysicalObject::APhysicalObject(void)
{

}

APhysicalObject::APhysicalObject (APhysicalObject const &cc)
{
	*this = cc;
}

APhysicalObject::~APhysicalObject (void)
{

}

APhysicalObject &APhysicalObject::operator=(APhysicalObject const &input)
{
	color = input.color;
	size = input.size;
	hp = input.hp;
	armor = input.armor;
	motion = input.motion;
	pos = input.pos;
	return (*this);
}

void APhysicalObject::setColor(unsigned int _color){color = _color;}
void APhysicalObject::setSize(unsigned int _size){size = _size;}
void APhysicalObject::setMotion(Vector2 _motion){motion = _motion;}
void APhysicalObject::setPos(Position _pos){pos = _pos;}
void APhysicalObject::setMotion(double _theta, int _mag) {motion = Vector2(_theta, _mag);}
void APhysicalObject::setPos(double x, double y){ pos = Position(x, y);}

unsigned int APhysicalObject::getColor(void) const { return (color);}
unsigned int APhysicalObject::getSize(void) const { return (size);}
unsigned int APhysicalObject::getHp(void) const { return (hp);}
unsigned int APhysicalObject::getArmor(void) const { return (armor);}
Vector2 APhysicalObject::getMotion(void) const { return (motion);}
Position APhysicalObject::getPos(void) const { return (pos);}
