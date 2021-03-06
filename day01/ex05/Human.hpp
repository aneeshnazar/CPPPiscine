#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include "Brain.hpp"

class Human {
	private:
		Brain brain;
	public:
		Human ();
		~Human ();
		std::string identify();
		Brain getBrain();
};

#endif
