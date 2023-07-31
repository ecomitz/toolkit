#ifndef EC_SINGLYLINKEDLIST
#define EC_SINGLYLINKEDLIST
// WIP
#include <iostream>
#include <string>
template <class T>
class singlylinkedlist
{
	template <class T>
	struct node
	{
		T datum; 
		node *next;


	};
private:
	unsigned int size = 0;


public:
	node<T>* head = 0;
	node<T>* tail = 0;

	
	// Adds datum to the back, i.e a new tail.
	void add(T datum);
	// Adds datum to a specific spot. If an invalid index or one that exceeds the size is given, it will not be added. If something already exists there, it will rewrite it.
	void addByIndex(T datum, unsigned int index);
	// Creates a singly linked list with no data.
	singlylinkedlist();
	// Returns the value found at the index. Partially implemented
	T getAtIndex(unsigned int index);
	// Creates a singly linked list starting with the given datum. 
	singlylinkedlist(T datum);
	// Copies a list over using the head node of another list. To use, put the head of another linked list in as the first and only parameter. NYI.
	singlylinkedlist(node<T> *listToCopy);
	// Deconstructor. NEEDS TESTING
	~singlylinkedlist();
	// Removes the head node and makes the next node the head.
	void removeHead();
	// Removes a node at a specific index. If the index is invalid, do nothing. 
	void removeByIndex(unsigned int index);	
	// Removes all instances of the specified datum. NYI.
	void removeAllInstances(T data); 
	// Prints all the values in the linked list
	void traverse();
	// Turns the current list into its own reversed form.
	void reverse();
	// Reverses the input list and stores the resultant list into the returned variable. WARNING: This will delete the input list. NYI.
	singlylinkedlist<T>* reverse(singlylinkedlist<T> listToReverse);
	// Returns a reversed copy of the inputted list. NYI.
	singlylinkedlist<T> reversedCopy(singlylinkedlist<T> listToCopy); 
	// Returns the size of the list
	unsigned int getSize();
	// Performs a linear search of the data to find the input datum and returns the index it is found at. Returns -1 if it cannot be found. Useful for unsorted lists. NYI.
	bool find(T datum, unsigned int &index);
	// Traverse with memory locations! Might be useful, perhaps? Just prints the memory locations.
	void traverseWithMemLocs();
	// Like traverse, but stores what traverse would've put out as a string.
	std::string contentsAsString();
	



};
#endif
