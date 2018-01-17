#include "../includes/Pickup.class.hpp"

Pickup::Pickup(void) {
	this->setColor(3);
	this->setSize(1);
	this->setHp(1);
	this->setArmor(0);
	this->setType(0); // set to rand() % NUMBER_OF_TYPES
	this->setMotion(PICKUP_INIT_TH, PICKUP_INIT_MAG);
	this->setPos(PICKUP_INIT_X, PICKUP_INIT_Y);
}

Pickup::Pickup(Pickup const &cc) {
	*this = cc;
}

Pickup::~Pickup(void) { }

Pickup &Pickup::operator=(Pickup const &input) {
	this->setType(input.getType());
	this->setColor(input.getColor());
	this->setSize(input.getSize());
	this->setHp(input.getHp());
	this->setArmor(input.getArmor());
	this->setMotion(input._motion);
	this->setPos(input._pos);

	return (*this);
}

int Pickup::getType(void) const {
	return (this->_type);
}

void Pickup::setType(int n) {
	this->_type = n;
}
// 
// int Pickup::Collision(Bullet const &boink) {
// 	return (1);
// }
//
// int Pickup::Collision(Player const &boink) {
// 	std::cout << "Yummy" << this->_type << std::endl;
// 	return (0);
// }
//
// int Pickup::Collision(Obstacle const &boink) {
// 	return (1);
// }
//
// int Pickup::Collision(Pickup const &boink) {
// 	return (1);
// }
