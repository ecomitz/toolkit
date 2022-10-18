#include "singlylinkedlist.h"
#include <iostream>

	// All scenarios need test cases



singlylinkedlist::singlylinkedlist()
{	
	head = 0;
	tail = 0;

	}
singlylinkedlist::singlylinkedlist(int datum)
{
	node *head = new node;
	head->datum = datum;
	tail = head;
	head->next = 0;
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
		//	std::cout << "While loop entered" << std::endl;
		
			//	std::cout << "Traversal occurred" << std::endl;
				trailer = traverser;
			//	std::cout << "Trailer is now: " << trailer->data << std::endl;
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
