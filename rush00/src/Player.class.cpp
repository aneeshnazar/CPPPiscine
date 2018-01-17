#include "../includes/Player.class.hpp"

Player::Player(void) {
	this->setColor(0);
	this->setSize(2);
	this->setHp(5);
	this->setArmor(0);
	this->setScore(0);
	this->setBoost(0);
	this->setBulletDmg(20);
	this->setMotion(PLAYER_INIT_TH, PLAYER_INIT_MAG);
	this->setPos(PLAYER_INIT_X, PLAYER_INIT_Y);
}

Player::Player(Player const &cc) {
	*this = cc;
}

Player::~Player(void) { }

Player &Player::operator=(Player const &input) {
	this->setScore(input.getScore());
	this->setBoost(input.getBoost());
	this->setBulletDmg(input.getBulletDmg());
	this->setColor(input.getColor());
	this->setSize(input.getSize());
	this->setHp(input.getHp());
	this->setArmor(input.getArmor());
	this->setMotion(input._motion);
	this->setPos(input._pos);

	return (*this);
}

unsigned int Player::getScore(void) const {
	return (this->_score);
}

unsigned int Player::getBoost(void) const {
	return (this->_dmgBoostTimer);
}

unsigned int Player::getBulletDmg(void) const {
	return (this->_bulletDmg);
}

void Player::setScore(unsigned int score) {
	this->_score = score;
}

void Player::setBoost(unsigned int boost) {
	this->_dmgBoostTimer = boost;
}

void Player::setBulletDmg(unsigned int dmg) {
	this->_bulletDmg = dmg;
}

Bullet *Player::PlayerShoot() {
	Bullet *b = new Bullet(this->getBulletDmg(),
							this->_pos.getX(),
							this->_pos.getY(),
							this->_motion.getTheta(),
							this->_motion.getMagnitude() * 2);
	return (b);
}

// int Player::Collision(Bullet const &boink) {
// 	return (1);
// }
//
// int Player::Collision(Player const &boink) {
// 	return (1);
// }
//
// int Player::Collision(Obstacle const &boink) {
// 	if (!this->getBoost()) {
// 		this->takeDmg(1);
// 		this->setBoost(DMG_BOOST_FRAMES);
// 	}
// 	return (this->getHp());
// }
//
// int Player::Collision(Pickup const &boink) {
// 	std::cout << "Got a pickup" << std::endl;
// 	//pickupTable[boink.getType()];
// 	return (1);
// }
