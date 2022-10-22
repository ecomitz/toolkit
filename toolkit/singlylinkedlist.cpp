#include "singlylinkedlist.h"
#include <iostream>

	// All scenarios need test cases. 
	// Need to find a way to test for memory leaks.



singlylinkedlist::singlylinkedlist()
{	
	head = 0;
	tail = 0;

	}
singlylinkedlist::singlylinkedlist(int datum)
{
	head = new node;
	head->datum = datum;
	tail = head;
	head->next = 0;
}
singlylinkedlist::~singlylinkedlist()
{
	while (head->next != 0)
	{
		node* traverser = head;
		while (traverser->next != 0)
		{
			traverser = traverser->next;
		}
		delete traverser;
	}
	delete head;
}
void singlylinkedlist::traverse()
{
	node *traverser = head;
	while (traverser != 0)
	{
		std::cout << traverser->datum << std::endl;
		traverser = traverser->next;
	}
	}

	void singlylinkedlist::add(int datum)
	{
		// Scenario: No nodes exist yet
		if (head == 0)
		{
			head = new node;
			head->datum = datum;
			tail = head;
			head->next = 0;
			tail->next = 0;
			return;
		}
		// Scenario: Only 1 node exists
		else if (tail == head)
		{
			tail = new node;
			head->next = tail;
			tail->datum = datum;
			tail->next = 0;
			return;
		}
		
		 // Scenario: There is already at least 2 nodes present. 
			node *traverser = head;
			node *trailer = 0;
			while (traverser != 0)
			{
				trailer = traverser;
				traverser = traverser->next;			
			}
			traverser = new node;
			traverser->datum = datum;
			traverser->next = 0;
			trailer->next = traverser;
	
	}
	void singlylinkedlist::addByIndex(int datum, int index)
	{

		node* traverser = head;
		node* trailer = 0;
		int i = 0;
		if (index == 0) // aka it shall be the head
		{
			node* newOne = new node;
			newOne->datum = datum;
			newOne->next = head;
			head = newOne;
			return;
		}
		while (i <= index && traverser != 0)
		{

			if (i == index)
			{
			//	std::cout << "Traverser's cur value:" << traverser->datum << std::endl;
				node* newOne = new node;
				//traverser = new node;
				newOne->datum = datum;
				newOne->next = traverser;
				trailer->next = newOne;
			//	traverser->next = newOne;
			//	std::cout << "Traverser's next:" << traverser->next->datum << std::endl;
				return;
			}
			trailer = traverser;
			traverser = traverser->next;
			i++;
		}


	}
	void singlylinkedlist::removeByIndex(int index)
	{
		node *traverser = head;
		node *trailer = 0;

		if (index == 0)
		{
			head = head->next;
			delete traverser;
			return;
		}
		int i = 0;
		while (traverser->next != 0 && i < index)
		{	
				trailer = traverser;	
				traverser = traverser->next;
			i++;
		}
		if (i != index)
		{
			return; // no deletion possible.
		}
		if (traverser->next == 0)
		{
			trailer->next = 0;
		}
		else
		{
			trailer->next = traverser->next;
		}
		delete traverser;
	}
	void singlylinkedlist::removeAllInstances(int data)
	{
		// fill with code
/*
		node* traverser = head;
		node* trailer = 0;
		if (traverser->datum == data && traverser == head)
		{
			traverser = traverser->next;
			delete head;
			head = traverser;
			
			
		}
		while (traverser != 0)
		{
			if (traverser->datum == data)
			{
				if (trailer != 0)
				{
					trailer->next = traverser->next;
				}
				delete traverser;
			}
		}
		*/
	}