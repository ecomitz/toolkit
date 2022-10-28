#ifndef EC_DOUBLYLINKEDLIST
#define EC_DOUBLYLINKEDLIST
// This entire class: NYI
class doublylinkedlist
{
	struct node
	{
		int datum; // placeholder
		node* prev;
		node* next;
	};


public:

	node* head = 0;
	node* tail = 0;
	doublylinkedlist();
	doublylinkedlist(int datum);
	doublylinkedlist(node head);
   ~doublylinkedlist();
	void add(int datum);
	void addByIndex(int datum, int index);
	void removeByIndex(int index);
	void removeAllInstances(int data);
	void traverse();
	void reverse();
	doublylinkedlist reversedCopy(doublylinkedlist listToCopy);
	

};
#endif
