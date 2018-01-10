#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain {
	private:
		void *  me;
	public:
		Brain ();
		~Brain ();
		std::string identify();
};

#endif
