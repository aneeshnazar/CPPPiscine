#ifndef BULLET_CLASS_HPP
#define BULLET_CLASS_HPP

# include <AUnit.class.hpp>
// # include <Player.class.hpp>
// # include <Obstacle.class.hpp>
// # include <Pickup.class.hpp>

class Bullet : public AUnit {

private:
	unsigned int _dmg;

public:
	Bullet(void);
	Bullet(unsigned int n, double x, double y, double th, double mag);
	Bullet(Bullet const &cc);
	~Bullet(void);
	Bullet &operator=(Bullet const &input);

	unsigned int getDmg(void) const;

	void setDmg(unsigned int n);

	// int Collision(Player const &boink);
	// int Collision(Bullet const &boink);
	// int Collision(Obstacle const &boink);
	// int Collision(Pickup const &boink);
};

#endif
