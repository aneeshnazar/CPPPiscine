#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Pony {
	private:
		std::string name;
	public:
		Pony ();
		Pony (std::string name);
		void run();
		~Pony ();
};

#endif
