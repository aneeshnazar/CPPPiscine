#ifndef APHYSICALOBJECT_CLASS_HPP
# define APHYSICALOBJECT_CLASS_HPP

# include "Vector2.class.hpp"
# include "Position.class.hpp"
#include <iostream>

class APhysicalObject {

private:
	unsigned int color;
	unsigned int size;
	unsigned int hp;
	unsigned int armor;
	Vector2 motion;
	Position pos;
public:
	APhysicalObject (void);
	APhysicalObject (APhysicalObject const &cc);
	~APhysicalObject (void);
	APhysicalObject &operator=(APhysicalObject const &input);

	void setColor(unsigned int _color);
	void setSize(unsigned int _size);
	void setMotion(Vector2 _motion);
	void setMotion(double _theta, int _mag);
	void setPos(Position _pos);
	void setPos(double x, double y);

	unsigned int getColor(void) const;
	unsigned int getSize(void) const;
	unsigned int getHp(void) const;
	unsigned int getArmor(void) const;
	Vector2 getMotion(void) const;
	Position getPos(void) const;

	//virtual void Collision(APhysicalObject const &boink);

};

#endif
