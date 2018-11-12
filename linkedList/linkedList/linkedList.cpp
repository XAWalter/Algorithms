#include <iostream>

#include "linkedList.h"

list::list() {
	head = new node;
	head->data = 1;
	head->next = NULL;
}

list::~list() {

}

void list::add(int x) {
	temp = head;

	while (temp->next != NULL) {
		temp->data;
		temp = temp->next;
	}

	temp->next = new node;
	temp=temp->next;
	temp->data = x;
	temp->next = NULL;
}

void list::print() {
	temp = head;
	do{
		std::cout << temp->data << std::endl;
		temp = temp->next;
	} while (temp != NULL);
}