#pragma once
#include <iostream>
#include "clsDblLinkedList.h"
// Queue Class	
template <class T>
class clsMyQueue
{
	// Queue is a Data Structure that Follows the First In First Out (FIFO) Principle, where the First Item Added to the Queue is the First Item to be Removed from the Queue. The Main Operations of a Queue are Enqueue (Adding an Item to the Back of the Queue) and Dequeue (Removing an Item from the Front of the Queue). In this Implementation, we will Use a Doubly Linked List to Implement the Queue, where the Front of the Queue will be at the Head of the List and the Back of the Queue will be at the Tail of the List.
	protected:

		// Doubly Linked List to Store the Items in the Queue
		//composition relationship between Queue and Doubly Linked List, where the Queue class contains an instance of the Doubly Linked List class to manage the items in the queue.
		clsDblLinkedList<int> MyList;
		
public:

	// Enqueue (Adding an Item to the Back of the Queue)
	void push(T Item)
	{
		MyList.InsertAtEnd(Item);
	}

	// Dequeue (Removing an Item from the Front of the Queue)
	void pop()
	{
		MyList.DeleteFirstNode();
	}

	// Print Queue
	void print()
	{
		MyList.PrintList();
	}

	// Get Size of Queue
	int Size()
	{
		return MyList.Size();
	}

	// Is Empty
	bool IsEmpty()
	{
		return MyList.IsEmpty();
	}

	// Get Front Item
	T front()
	{
		return MyList.GetItem(0);
	}


	// Get Back Item
	T back()
	{
		return MyList.GetItem(MyList.Size() -1);
	}

};

