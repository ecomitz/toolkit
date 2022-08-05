#ifndef EC_DOUBLYLINKEDLIST
#define EC_DOUBLYLINKEDLIST
class doublylinkedlist
{
	struct node
	{
		int data; // placeholder
		node* prev;
		node* next;
	};

	void add(int data);

	node head;
	node tail;
};
#endif
