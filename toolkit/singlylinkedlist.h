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
	// Returns a reversed copy of the inputted list. NYI.
	singlylinkedlist reversedCopy(singlylinkedlist listToCopy); 
	unsigned int getSize();



};
#endif
