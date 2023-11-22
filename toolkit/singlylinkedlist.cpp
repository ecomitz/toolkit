#include "singlylinkedlist.h"


	// All scenarios need test cases. 
	// Need to find a way to test for memory leaks.


template <class T>
singlylinkedlist<T>::singlylinkedlist()
{	
	head = 0;
	tail = 0;
	size = 0;

	}
template <class T>
singlylinkedlist<T>::singlylinkedlist(T data)
{
	head = new node<T>;
	head->data = data;
	tail = head;
	head->next = 0;
	size = 1;
}
template <class T>
singlylinkedlist<T>::singlylinkedlist(node<T> *listToCopy)
{
 // Placeholder. NYI.
	node<T>* traverser = listToCopy;
	node<T>* traverserForNewList;
	head = new node<T>; // The first node
	head->data = listToCopy->data;
	head->next = 0;
	tail = head; // We'll assume for now that the tail is also the head. 
	size = 1;
	traverserForNewList = tail;
	if (listToCopy->next != 0) //  The second node, if there is one.
	{
		node<T>* newOne = new node<T>;
		newOne->data = listToCopy->next->data;
		newOne->next = 0;
		head->next = newOne;
		traverserForNewList = newOne;
		size++;
		traverser = listToCopy->next->next;
		if (listToCopy->next->next == 0) // AKA it's a 2 node list and the second one is thus the tail.
		{
			tail = newOne;
			tail->data = listToCopy->next->data;
			tail->next = 0;
			
		}
	}
	while (traverser != 0) // The rest of the nodes for a list over 2 nodes.
	{
		node<T>* newOne = new node<T>;
		newOne->data = traverser->data;
		newOne->next = 0;
		traverserForNewList->next = newOne;
		traverserForNewList = newOne;
		traverser = traverser->next;
		size++;
	
	}
	tail = traverserForNewList;

}
template <class T>
void singlylinkedlist<T>::removeHead()
{
	if (head != 0)
	{
		node<T>* newHead = head->next;
		size--;
		delete head;
		head = newHead;
	}
}
template <class T>
singlylinkedlist<T>::~singlylinkedlist()
{
	while (head != 0)
	{
		this->removeHead();
	}
}
template <class T>
void singlylinkedlist<T>::traverse()
{
	node<T> *traverser = head;
	while (traverser != 0)
	{
		if (traverser->next != 0)
		{
			std::cout << traverser->data << ", ";
		}
		else
		{
			std::cout << traverser->data;
		}
		traverser = traverser->next;
		
	}
	std::cout << std::endl;
}
template <class T>
T singlylinkedlist<T>::getAtIndex(unsigned int index)
{
	if (index >= size)
	{
		return -1; // Placeholder
	}
	int i = 0; 
	node<T>* traverser = head;

	while (traverser != 0)
	{
		if (i == index)
		{
			return traverser->data;
		}
		traverser = traverser->next;

	}
	return head->data; // Default case: 1 node, thus it is the head.
}
template <class T>
void singlylinkedlist<T>::reverse()
{
	
	singlylinkedlist<T>* reversedForm = new singlylinkedlist();
	
	
	for (int i = 0; i < size; i++)
	{
		node<T>* traverser = head;
		node<T>* trailer = head; // While it may seem intuitive here to put it as null, if it's a single node list then later we'll be dereferencing a nullptr. 
		while (traverser->next != 0)
		{
			
			trailer = traverser;
			traverser = traverser->next; // get to the tail
			
		}
		
		reversedForm->add(traverser->data);
		trailer->next = 0;
		delete traverser;
	}

	head = reversedForm->head;
}
template <class T>
singlylinkedlist<T>* singlylinkedlist<T>::reverse(singlylinkedlist<T> listToReverse)
{
 // NOT YET FUNCTIONAL 
	singlylinkedlist<T>* reversedFormPointer = new singlylinkedlist();

	for (int i = 0; i < listToReverse.getSize(); i++)
	{
		node<T>* traverser = listToReverse.head;
		node<T>* trailer = listToReverse.head;
		while (traverser->next != 0)
		{
			trailer = traverser;
			traverser = traverser->next;
		}
		reversedFormPointer->add(traverser->data);
		trailer->next = 0;
		delete traverser;
	}
	
	return reversedFormPointer;

}
template <class T>
singlylinkedlist<T> singlylinkedlist<T>::reversedCopy(singlylinkedlist<T> listToCopy)
{

	return 0; // Placeholder
}
template <class T>
unsigned int singlylinkedlist<T>::getSize()
{
	return this->size;
}
template <class T>
bool singlylinkedlist<T>::find(T data, unsigned int &index)
{
	 
	unsigned int i = 0;

	node<T>* traverser = head;
	

	while (traverser != 0)
	{

		if (traverser->data == data)
		{

			index = i;
			return true;
			
		}

		i++;
		traverser = traverser->next;

	}



	return false;
}
template <class T>
void singlylinkedlist<T>::traverseWithMemLocs()
{
	node<T>* traverser = head;
	while (traverser != 0)
	{
		if (traverser->next != 0)
		{
			std::cout << std::hex << traverser << ", ";
		}
		else
		{
			std::cout << std::hex << traverser;
		}
		traverser = traverser->next;

	}
	std::cout << std::dec << std::endl; // All numbers printed in the program will be in hex unless I change it back, it seems
}


	template <class T>
	void singlylinkedlist<T>::add(T data)
	{
		// Scenario: No nodes exist yet
		if (head == 0)
		{
			head = new node<T>;
			head->data = data;
			tail = head;
			head->next = 0;
			tail->next = 0;
			size = 1;
			return;
		}
		// Scenario: Only 1 node exists
		else if (tail == head)
		{
			tail = new node<T>;
			head->next = tail;
			tail->data = data;
			tail->next = 0;
			size = 2;
			return;
		}
		
		 // Scenario: There is already at least 2 nodes present. 
		node<T>* newOne = new node<T>;
		newOne->data = data;
		tail->next = newOne;
		tail = newOne;
		tail->next = 0;
		size++;
	
	}
	template <class T>
	void singlylinkedlist<T>::addByIndex(T data, unsigned int index)
	{

		node<T>* traverser = head;
		node<T>* trailer = 0;
		int i = 0;
		if (index == 0) // aka it shall be the head
		{
			node<T>* newOne = new node<T>;
			newOne->data = data;
			newOne->next = head;
			head = newOne;
			size++;
			return;
		}
		else if (index == size) // aka it shall be the new tail
		{
			node<T>* newOne = new node<T>;
			newOne->data = data;
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
				node<T>* newOne = new node<T>;
				newOne->data = data;
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
	template <class T>
	void singlylinkedlist<T>::removeByIndex(unsigned int index)
	{
		node<T> *traverser = head;
		node<T> *trailer = 0;

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
	template <class T>
	void singlylinkedlist<T>::removeAllInstances(T data)
	{
		// fill with code

		node<T>* traverser = head;
		node<T>* trailer = 0;
		if (traverser->data == data && traverser == head) // i.e if head is a case
		{
			traverser = traverser->next;
			delete head;
			head = traverser;
			size--;
			
			
		}
		/*
		while (traverser != 0)
		{
			if (traverser->data == data)
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
