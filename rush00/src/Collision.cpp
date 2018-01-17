#include <Bullet.class.hpp>
#include <Player.class.hpp>
#include <Obstacle.class.hpp>
#include <Pickup.class.hpp>

void Collision(Player &a, Pickup &b) {
	b.takeDmg(1);
}

void Collision(Player &a, Obstacle &b) {
	if (!a.getBoost()) {
		a.takeDmg(1);
		a.setBoost(DMG_BOOST_FRAMES);
		b.takeDmg(a.getHp());
	}
}

void Collision(Bullet &a, Obstacle &b) {
	if (!a.getArmor() && b.getSize())
		a.takeDmg(1);
	if (!b.getArmor())
		b.takeDmg(a.getDmg());
}
