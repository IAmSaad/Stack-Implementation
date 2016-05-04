#include"Stack.h"
#include<iostream>
using namespace std;

int main() {
	stack pileOfBooks;
	
	pileOfBooks.push(100);
	pileOfBooks.push(200);
	pileOfBooks.push(300);
	pileOfBooks.push(400);
	pileOfBooks.push(500);
	
	pileOfBooks.displayFull();

	cout<<pileOfBooks.peek()<<endl;

	pileOfBooks.pop();

	pileOfBooks.displayFull();

	cout << pileOfBooks.peek() << endl;

	system("pause");
	return 0;
}
