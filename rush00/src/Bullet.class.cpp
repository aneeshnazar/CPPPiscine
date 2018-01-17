#include "../includes/Bullet.class.hpp"

Bullet::Bullet(void) {
	this->setColor(1);
	this->setSize(0);
	this->setHp(1);
	this->setArmor(0);
	this->setDmg(20);
	this->setMotion(0, 1.0);
	this->setPos(0, 0);
}

Bullet::Bullet(unsigned int n, double x, double y, double th, double mag) {
this->setColor(1);
this->setSize(0);
this->setHp(1);
this->setArmor(0);
this->setDmg(n);
this->setMotion(th, mag);
this->setPos(x, y);
}

Bullet::Bullet(Bullet const &cc) {
	*this = cc;
}

Bullet::~Bullet(void) { }

Bullet &Bullet::operator=(Bullet const &input) {
	this->setDmg(input.getDmg());
	this->setColor(input.getColor());
	this->setSize(input.getSize());
	this->setHp(input.getHp());
	this->setArmor(input.getArmor());
	this->setMotion(input._motion);
	this->setPos(input._pos);

	return (*this);
}

unsigned int Bullet::getDmg(void) const {
	return (this->_dmg);
}

void Bullet::setDmg(unsigned int n) {
	this->_dmg = n;
}

// int Bullet::Collision(Bullet const &boink) {
// 	return (1);
// }
//
// int Bullet::Collision(Player const &boink) {
// 	return (1);
// }
//
// int Bullet::Collision(Obstacle const &boink) {
// 	if (!this->getArmor() && boink.getSize())
// 		this->takeDmg(1);
// 	return (this->getHp());
// }
//
// int Bullet::Collision(Bullet const &boink) {
// 	return (1);
// }
