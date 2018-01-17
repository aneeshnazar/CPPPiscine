#ifndef PICKUP_CLASS_HPP
# define PICKUP_CLASS_HPP

# define PICKUP_INIT_TH 0
# define PICKUP_INIT_MAG 1
# define PICKUP_INIT_X 0
# define PICKUP_INIT_Y 0

# include <AUnit.class.hpp>
// # include <Player.class.hpp>
// # include <Bullet.class.hpp>
// # include <Obstacle.class.hpp>

class Pickup : public AUnit {

private:
	int _type;

public:
	Pickup (void);
	Pickup (Pickup const &cc);
	~Pickup (void);
	Pickup &operator=(Pickup const &input);

	int getType(void) const;

	void setType(int n);

	// int Collision(Player const &boink);
	// int Collision(Bullet const &boink);
	// int Collision(Obstacle const &boink);
	// int Collision(Pickup const &boink);
};

#endif
