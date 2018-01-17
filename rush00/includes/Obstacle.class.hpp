#ifndef OBSTACLE_CLASS_HPP
# define OBSTACLE_CLASS_HPP

# include <AUnit.class.hpp>
// # include <Player.class.hpp>
// # include <Bullet.class.hpp>
// # include <Pickup.class.hpp>

class Obstacle : public AUnit {

private:
	unsigned int _pointValue;

public:
	Obstacle (void);
	Obstacle (Obstacle const &cc);
	Obstacle(unsigned int c, unsigned int s, unsigned int h, unsigned int a,
		unsigned int n, double x, double y, double th, double mag);
	~Obstacle (void);
	Obstacle &operator=(Obstacle const &input);

	unsigned int getPointVal(void) const;

	void setPointVal(unsigned int n);

	// int Collision(Player const &boink);
	// int Collision(Bullet const &boink);
	// int Collision(Obstacle const &boink);
	// int Collision(Pickup const &boink);
};

#endif
