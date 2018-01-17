#include "../includes/Node.class.hpp"

Node::Node(void) { }

Node::Node(AUnit *obj): obj(obj) { }

Node::Node(Node const &cc): obj(cc.getObj()), next(cc.getNext()) { }

Node::~Node(void) {
	delete obj;
}

Node &Node::operator=(Node const &input) {
	this->obj = input.getObj();
	this->next = input.getNext();
	return (*this);
}

AUnit *Node::getObj(void) const {
	return (this->obj);
}

Node *Node::getNext(void) const {
	return (this->next);
}

void	AddNode(Node **head, Node *in) {
	in->next = *head;
	*head = in;
}

void	DeleteNode(Node *prev, Node **del) {
	prev->next = (*del)->next;
	delete *del;
}
