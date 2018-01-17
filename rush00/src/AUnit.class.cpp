#include "../includes/AUnit.class.hpp"

AUnit::AUnit(void) { }

AUnit::AUnit(AUnit const &cc): _color(cc.getColor()),
								_size(cc.getSize()),
								_hp(cc.getHp()),
								_armor(cc.getArmor()),
								_motion(cc._motion),
								_pos(cc._pos) { }

AUnit::~AUnit(void) { }

AUnit &AUnit::operator=(AUnit const &input) {
	this->_color = input.getColor();
	this->_size = input.getSize();
	this->_hp = input.getHp();
	this->_armor = input.getArmor();
	this->_motion = input._motion;
	this->_pos = input._pos;
	return (*this);
}

void AUnit::setColor(unsigned int color) {
	this->_color = color;
}

void AUnit::setSize(unsigned int size) {
	this->_size = size;
}

void AUnit::setHp(unsigned int hp) {
	this->_hp = hp;
}

void AUnit::setArmor(unsigned int armor) {
	this->_armor = armor;
}

void AUnit::setMotion(Vector2 motion) {
	this->_motion = motion;
}

void AUnit::setMotion(double theta, double mag) {
	Vector2 in(theta, mag);
	this->_motion = in;
}

void AUnit::setPos(Position pos) {
	this->_pos = pos;
}

void AUnit::setPos(double x, double y) {
	Position in(x, y);
	this->_pos = in;
}


unsigned int AUnit::getColor(void) const {
	return (this->_color);
}

unsigned int AUnit::getSize(void) const {
	return (this->_size);
}

unsigned int AUnit::getHp(void) const {
	return (this->_hp);
}

unsigned int AUnit::getArmor(void) const {
	return (this->_armor);
}

Vector2 AUnit::getMotion(void) const {
 	return (this->_motion);
}

Position AUnit::getPos(void) const {
 	return (this->_pos);
}

void	AUnit::takeDmg(unsigned int dmg) {
	if (this->getHp() < dmg)
		this->setHp(0);
	else
		this->setHp(this->getHp() - dmg);
}

void	AUnit::Movement(void) {
	this->_pos.setX(this->_pos.getX() + (this->_motion.getMagnitude() * std::cos(this->_motion.getTheta())));
	this->_pos.setY(this->_pos.getY() - (this->_motion.getMagnitude() * std::sin(this->_motion.getTheta())));
}
