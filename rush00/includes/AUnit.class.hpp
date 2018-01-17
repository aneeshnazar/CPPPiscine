#ifndef AUNIT_CLASS_HPP
# define AUNIT_CLASS_HPP

# include "Vector2.class.hpp"
# include "Position.class.hpp"
# include <iostream>
# include <cmath>

class AUnit {

protected:
	unsigned int _color;
	unsigned int _size;
	unsigned int _hp;
	unsigned int _armor;
	Vector2 _motion;
	Position _pos;

public:
	AUnit (void);
	AUnit (AUnit const &cc);
	virtual ~AUnit (void);
	AUnit &operator=(AUnit const &input);

	void setColor(unsigned int color);
	void setSize(unsigned int size);
	void setHp(unsigned int hp);
	void setArmor(unsigned int armor);
	void setMotion(Vector2 motion);
	void setMotion(double theta, double mag);
	void setPos(Position pos);
	void setPos(double x, double y);

	unsigned int getColor(void) const;
	unsigned int getSize(void) const;
	unsigned int getHp(void) const;
	unsigned int getArmor(void) const;
	Vector2 getMotion(void) const;
	Position getPos(void) const;

	void takeDmg(unsigned int dmg);
	void Movement(void);
};

#endif
