#ifndef EC_DOUBLYLINKEDLIST
#define EC_DOUBLYLINKEDLIST
// WIP
#include <iostream>
#include <string>
template <class T>
class doublylinkedlist
{
	template <class T>
	struct node
	{
		T datum; // placeholder
		node* prev;
		node* next;
	};
private:
	unsigned int size = 0;

public:

	node<T>* head = 0;
	node<T>* tail = 0;
	// default constructor
	doublylinkedlist();
	// Creates a doubly linked list with one entry; the head and the tail will be this single entry.
	doublylinkedlist(T datum);
	// Copy constructor; makes an identical copy of the passed in list. Pass in the head of the list to copy.
	doublylinkedlist(node<T> head);
	// Deconstructor
   ~doublylinkedlist();
   // Adds datum to the back, i.e a new tail.
	void add(T data);	
	// Removes the head node and makes the next node the head.
	void removeHead();
	// Adds datum to a specific spot. If an invalid index or one that exceeds the size is given, do nothing. If something already exists there, it will rewrite it.
	void addByIndex(T datum, unsigned int index);
	// Removes a node at a specific index. If the index is invalid, do nothing. 
	void removeByIndex(unsigned int index);
	// Removes all instances of the specified datum. NYI.
	void removeAllInstances(T datum);
	// Removes the tail node and makes the previous node the tail.
	void removeTail();
	// Prints all the values in the linked list
	void traverse();
	// Traverse with memory locations! Might be useful, perhaps? Just prints the memory locations.
	void traverseWithMemLocs();
	// Prints all the values in the linked list in reverse
	void traverseReversed();
	// Turns the current list into its own reversed form.
	void reverse();
	// Returns a reversed copy of the inputted list. NYI.
	doublylinkedlist<T> reversedCopy(doublylinkedlist<T> listToCopy);
	// Returns the size of the list
	unsigned int getSize();
	// Traverse with memory locations in reverse! Might be useful, perhaps? Just prints the memory locations.
	void reverseTraverseWithMemLocs();
	// Like traverse, but stores what traverse would've put out as a string.
	std::string contentsAsString();
	
	

};
#endif
