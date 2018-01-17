#ifndef NODE_CLASS_HPP
#define NODE_CLASS_HPP

#include "AUnit.class.hpp"

class Node {

public:
	Node(void);
	Node(AUnit *obj);
	Node(Node const &cc);
	~Node(void);

	Node &operator=(Node const &input);

	AUnit *getObj(void) const;
	Node *getNext(void) const;

	AUnit *obj;
	Node *next;
};

void	AddNode(Node **head, Node *in);
void	DeleteNode(Node *prev, Node **del);

#endif
