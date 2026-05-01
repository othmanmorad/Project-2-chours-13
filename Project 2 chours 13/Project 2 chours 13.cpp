#include <iostream>
#include "clsMyQueue.h"
int main()
{
	clsMyQueue<int> MyQueue;

	MyQueue.push(1);
	MyQueue.push(2);
	MyQueue.push(3);
	MyQueue.push(4);

	cout << "\nQueue After Adding 4 Items: ";	
	MyQueue.print();

	cout<<"\nQueue Size : "<<MyQueue.Size();
	cout << "\nIs Queue Empty? : " << (MyQueue.IsEmpty() ? "Yes" : "No");
	cout << "\nFront Item : " << MyQueue.front();
	cout << "\nBack Item : " << MyQueue.back();

	cout << endl;
	cout << "\n\nQueue After Removing 2 Items: ";
	MyQueue.pop();
	MyQueue.pop();
	MyQueue.print();
}

