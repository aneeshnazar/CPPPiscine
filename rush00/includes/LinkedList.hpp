#ifndef LINKEDLIST_H
#define LINKEDLIST_H

class LinkedList {

private:
	APhysicalObject obj;
	LinkedList *next;

public:
	LinkedList();
	LinkedList(LinkedList const &cc);
	~LinkedList();
	LinkedList &operator=(LinkedList const &input);
};

#endif
