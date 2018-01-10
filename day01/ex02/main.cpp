#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
    ZombieEvent event;

    event.setZombieType("runner");
    event.randomChump();
    event.randomChump();
    event.randomChump();
    event.randomChump();
    event.setZombieType("slow mofo");
    event.randomChump();
    event.randomChump();
    event.randomChump();
    event.randomChump();
    return 0;
}
