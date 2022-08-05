#ifndef EC_SINGLYLINKEDLIST
#define EC_SINGLYLINKEDLIST
class singlylinkedlist
{
	struct node
	{
		int data; // placeholder
		node *next;


	};
private:
	node *head = 0;
	node *tail = 0;

public:
	void add(int data);
	bool removeByIndex(int index);	
	// Removes all instances of the specified value.
	bool removeAllInstances(int data); 
	// prints all the values in the linked list
	void traverse();




};
#endif
