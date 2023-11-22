#include "doublylinkedlist.h"

template <class T>
doublylinkedlist<T>::doublylinkedlist()
{
	head = 0;
	tail = 0;
}
template <class T>
doublylinkedlist<T>::doublylinkedlist(T data)
{
	head = new node;
	head->datum = data;
	head->next = 0;
	head->prev = 0;
	tail = head;
	
	
}
template <class T>
void doublylinkedlist<T>::add(T data)
{
	return; // placeholder
}
template <class T>
void doublylinkedlist<T>::removeHead()
{
	node* newHead = head->next;
	delete head;
	size--;
	head = newHead;
	head->prev = 0;
}
template <class T>
unsigned int doublylinkedlist<T>::getSize()
{
	return this->size;
}
template <class T>
void doublylinkedlist<T>::traverse()
{
	node<T>* traverser = head;
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
template <class T>
void doublylinkedlist<T>::traverseReversed()
{
	node<T>* traverser = tail;
	while (traverser != 0)
	{
		if (traverser->prev != 0)
		{
			std::cout << traverser->datum << ", ";
		}
		else
		{
			std::cout << traverser->datum;
		}
		traverser = traverser->prev;
	}
	std::cout << std::endl;
}
template <class T>
void doublylinkedlist<T>::traverseWithMemLocs()
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
void doublylinkedlist<T>::reverseTraverseWithMemLocs()
{
	node<T>* traverser = tail;
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
		traverser = traverser->prev;

	}
	std::cout << std::dec << std::endl; // All numbers printed in the program will be in hex unless I change it back, it seems

}
template <class T>
void doublylinkedlist<T>::removeTail()
{
	node* newTail = tail->prev;
	size--;
	delete tail;
	tail = newTail;
	tail->next = 0;
}