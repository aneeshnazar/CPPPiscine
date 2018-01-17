#include <Obstacle.class.hpp>

Obstacle::Obstacle(void) {
	this->setColor(2);
	this->setSize(2);
	this->setHp(60);
	this->setArmor(0);
	this->setPointVal(10);
	this->setMotion(0, 1.0);
	this->setPos(0, 0);
}

Obstacle::Obstacle(unsigned int c, unsigned int s, unsigned int h, unsigned int a,
	unsigned int n, double x, double y, double th, double mag) {
		this->setColor(c);
		this->setSize(s);
		this->setHp(h);
		this->setArmor(a);
		this->setPointVal(n);
		this->setMotion(th, mag);
		this->setPos(x, y);
}

Obstacle::Obstacle(Obstacle const &cc) {
	*this = cc;
}

Obstacle::~Obstacle(void) { }

Obstacle &Obstacle::operator=(Obstacle const &input) {
	this->setPointVal(input.getPointVal());
	this->setColor(input.getColor());
	this->setSize(input.getSize());
	this->setHp(input.getHp());
	this->setArmor(input.getArmor());
	this->setMotion(input._motion);
	this->setPos(input._pos);

	return (*this);
}

unsigned int Obstacle::getPointVal(void) const {
	return (this->_pointValue);
}

void Obstacle::setPointVal(unsigned int n) {
	this->_pointValue = n;
}

// int Obstacle::Collision(Player const &boink) {
// 	if (!boink.getBoost())
// 		this->takeDmg(this->getHp());
// 	return(this->getHp());
// }
//
// int Obstacle::Collision(Bullet const &boink) {
// 	if (!this->getArmor())
// 		this->takeDmg(boink.getDmg());
// 	return (this->getHp());
// }
//
// int Obstacle::Collision(Obstacle const &boink) {
// 	return (1);
// }
//
// int Obstacle::Collision(Pickup const &boink) {
// 	return (1);
// }
