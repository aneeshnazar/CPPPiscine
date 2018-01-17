#ifndef ENEMY_H
#define ENEMY_H

#include <Obstacle.class.hpp>

class Enemy : public Obstacle{
	private:

public:
	Enemy ();
	Enemy (Enemy const &cc);
	~Enemy ();
	Enemy &operator=(Enemy const &input);

	Obstacle *enemyShoot();
};

#endif
