#include "singlylinkedlist.h"
#include <iostream>

	// All scenarios need test cases. 
	// Need to find a way to test for memory leaks.



singlylinkedlist::singlylinkedlist()
{	
	head = 0;
	tail = 0;
	size = 0;

	}
singlylinkedlist::singlylinkedlist(int datum)
{
	head = new node;
	head->datum = datum;
	tail = head;
	head->next = 0;
	size = 1;
}
singlylinkedlist::singlylinkedlist(node *listToCopy)
{
 // Placeholder. NYI.
	node* traverser = listToCopy;
	node* traverserForNewList;
	head = new node; // The first node
	head->datum = listToCopy->datum;
	head->next = 0;
	tail = head; // We'll assume for now that the tail is also the head. 
	size = 1;
	traverserForNewList = tail;
	if (listToCopy->next != 0) //  The second node, if there is one.
	{
		node* newOne = new node;
		newOne->datum = listToCopy->next->datum;
		newOne->next = 0;
		head->next = newOne;
		traverserForNewList = newOne;
		size++;
		traverser = listToCopy->next->next;
		if (listToCopy->next->next == 0) // AKA it's a 2 node list and the second one is thus the tail.
		{
			tail = newOne;
			tail->datum = listToCopy->next->datum;
			tail->next = 0;
			
		}
	}
	while (traverser != 0) // The rest of the nodes for a list over 2 nodes.
	{
		node* newOne = new node;
		newOne->datum = traverser->datum;
		newOne->next = 0;
		traverserForNewList->next = newOne;
		traverserForNewList = newOne;
		traverser = traverser->next;
		size++;
	
	}
	tail = traverserForNewList;

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
		size--;
	}
	delete head;
}
void singlylinkedlist::traverse()
{
	node *traverser = head;
	while (traverser != 0)
	{
		if (traverser->next != 0)
		{
			std::cout << traverser->datum << ", ";
		}
		else
		{
			std::cout << traverser->datum;
		}
		traverser = traverser->next;
		
	}
	std::cout << std::endl;
	}

void singlylinkedlist::reverse()
{
	// TODO
}

singlylinkedlist singlylinkedlist::reversedCopy(singlylinkedlist listToCopy)
{
	return 0; // Placeholder
}

unsigned int singlylinkedlist::getSize()
{
	return this->size;
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
			size = 1;
			return;
		}
		// Scenario: Only 1 node exists
		else if (tail == head)
		{
			tail = new node;
			head->next = tail;
			tail->datum = datum;
			tail->next = 0;
			size = 2;
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
			tail = traverser;
			size++;
	
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
			size++;
			return;
		}
		else if (index == size) // aka it shall be the new tail
		{
			node* newOne = new node;
			newOne->datum = datum;
			newOne->next = 0;
			tail->next = newOne;
			tail = newOne;
			size++;
			return;
		}
		while (i <= index && traverser != 0)
		{

			if (i == index)
			{
				node* newOne = new node;
				newOne->datum = datum;
				newOne->next = traverser;
				trailer->next = newOne;
				size++;
				
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
			size--;
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
		if (traverser->next == 0) // The "Remove the Tail" case. 
		{
			trailer->next = 0;
			tail = trailer;
		}
		else
		{
			trailer->next = traverser->next;
		}
		delete traverser;
		size--;
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