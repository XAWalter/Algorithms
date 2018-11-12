#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"

class list{
private:
	node* head;
	node* temp;
public:
	list();
	~list();

	void add(int);
	void print();
};



#endif