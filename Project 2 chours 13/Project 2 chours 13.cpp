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


	cout << "==================================================================================\n";	

	MyQueue.push(5);
	MyQueue.push(6);
	MyQueue.push(7);
	MyQueue.push(8);
	MyQueue.push(9);
	MyQueue.print();


	cout << "\nGet Item at Index 1 : ";
	cout<<MyQueue.GetItem(1);


	cout << "\n\nQueue After Reversing: ";
	MyQueue.Reverse();
	MyQueue.print();

	cout << "\nUpdate Item at Index 2 to 10: ";	
	MyQueue.UpdateItem(2, 10);
	MyQueue.print();

	cout << "\nInsert After Index 1 with Value 20: ";
	MyQueue.InsertAfter(1, 20);
	MyQueue.print();

	cout << "\nInsert At Biginning with Value 30: ";
	MyQueue.InsertAtFront(30);
	MyQueue.print();


	cout << "\nInsert At End with Value 40: ";
	MyQueue.InsertAtBack(40);
	MyQueue.print();

	cout << "\nClear Queue: ";	
	MyQueue.Clear();
	MyQueue.print();
}

