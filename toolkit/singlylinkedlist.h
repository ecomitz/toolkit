#ifndef EC_SINGLYLINKEDLIST
#define EC_SINGLYLINKEDLIST
class singlylinkedlist
{
	struct node
	{
		int datum; // placeholder
		node *next;


	};
private:
	node *head = 0;
	node *tail = 0;

public:

	
	// Adds datum to the back.
	void add(int datum);
	// Adds data to a specific spot. If an invalid index or one that exceeds the size is given, it will not be added.
	void addByIndex(int datum, int index);
	// Creates a singly linked list with no data.
	singlylinkedlist();
	// Creates a singly linked list starting with the given datum. 
	singlylinkedlist(int datum);
	// Deconstructor
	~singlylinkedlist();
	void removeByIndex(int index);	
	// Removes all instances of the specified datum.
	bool removeAllInstances(int data); 
	// prints all the values in the linked list
	void traverse();




};
#endif
