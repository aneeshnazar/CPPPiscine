#ifndef PLAYER_CLASS_HPP
#define PLAYER_CLASS_HPP

# define WIN_W 600
# define PLAYER_INIT_TH 0
# define PLAYER_INIT_MAG 0
# define PLAYER_INIT_X 0
# define PLAYER_INIT_Y WIN_W / 2
# define DMG_BOOST_FRAMES 50

#include <iostream>
#include <AUnit.class.hpp>
#include <Bullet.class.hpp>
// #include <Obstacle.class.hpp>
// #include <Pickup.class.hpp>

class Player : public AUnit {

private:
	unsigned int _score;
	unsigned int _dmgBoostTimer;
	unsigned int _bulletDmg;

public:
	Player(void);
	Player(Player const &cc);
	~Player(void);
	Player &operator=(Player const &input);

	unsigned int getScore(void) const;
	unsigned int getBoost(void) const;
	unsigned int getBulletDmg(void) const;

	void setScore(unsigned int score);
	void setBoost(unsigned int boost);
	void setBulletDmg(unsigned int dmg);

	Bullet *PlayerShoot();

	// int Collision(Player const &boink);
	// int Collision(Bullet const &boink);
	// int Collision(Obstacle const &boink);
	// int Collision(Pickup const &boink);
};

#endif
