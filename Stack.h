#pragma once

struct node {			//struct of node 
	double data;
	node* nextPtr;
	node();
};

class stack {			//class of stack that holds nodes
private:
	node* headPtr;
	size_t internalNodes;
public:
	stack();
	~stack();
	void push(double);
	void pop();
	double peek();
	void displayFull();	//displays all elements in a stack
};