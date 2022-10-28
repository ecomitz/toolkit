#ifndef EC_SINGLYLINKEDLIST
#define EC_SINGLYLINKEDLIST
// WIP
class singlylinkedlist
{
	struct node
	{
		int datum; // placeholder
		node *next;


	};
private:
	unsigned int size = 0;


public:
	node* head = 0;
	node* tail = 0;

	
	// Adds datum to the back.
	void add(int datum);
	// Adds data to a specific spot. If an invalid index or one that exceeds the size is given, it will not be added. If something already exists there, it will rewrite it.
	void addByIndex(int datum, int index);
	// Creates a singly linked list with no data.
	singlylinkedlist();
	// Creates a singly linked list starting with the given datum. 
	singlylinkedlist(int datum);
	// Copies a list over using the head node of another list. To use, put the head of another linked list in as the first and only parameter. NYI.
	singlylinkedlist(node *listToCopy);
	// Deconstructor. NEEDS TESTING
	~singlylinkedlist();
	void removeByIndex(int index);	
	// Removes all instances of the specified datum. NYI.
	void removeAllInstances(int data); 
	// prints all the values in the linked list
	void traverse();
	// Turns the current list into its own reversed form. NYI.
	void reverse();
	// Reverses the input list and stores the resultant list into the returned variable. WARNING: This will delete the input list. May be faster than void reverse. NYI.
	singlylinkedlist reverse(singlylinkedlist listToReverse);
	// Returns a reversed copy of the inputted list. NYI.
	singlylinkedlist reversedCopy(singlylinkedlist listToCopy); 
	unsigned int getSize();
	// Performs a linear search of the data to find the input datum and returns the index it is found at. Returns -1 if it cannot be found. Useful for unsorted lists. NYI.
	int find(int datum);
	// Traverse with memory locations! Might be useful, perhaps? Just prints the memory locations.
	void traverseWithMemLocs();




};
#endif
