#include"Stack.h"
#include<iostream>

node::node() {				//ctor of node struct
	data = 0;
	nextPtr = NULL;
}

stack::stack() {			//ctor of stack class
	headPtr = NULL;
	internalNodes = 0;
}

stack::~stack() {			//dtor of stack class
	node* current = this->headPtr;
	node* temp = NULL;

	while (current != NULL) {
		temp = current->nextPtr;
		delete current;
		current = temp;
	}
}

void stack::push(double pushThis) {		//adds on top of the stack
	node* temp = new node();
	temp->data = pushThis;
	temp->nextPtr = headPtr;
	headPtr = temp;
	internalNodes++;
}

double stack::peek() {				//displays the most recently added number
	return headPtr->data;
}

void stack::pop() {					//deletes the most recently added node
	node* current = this->headPtr;
	headPtr = current->nextPtr;
	std::cout << current->data << " was deleted" << std::endl;
	std::cout << "\n";
	delete current;
}

void stack::displayFull() {			//displays the full stack i.e. the data in the stack
	node* current = this->headPtr;
	while (current!=NULL) {
		std::cout << current->data << std::endl;
		current = current->nextPtr;
	}
	std::cout << "\n";
}