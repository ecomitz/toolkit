#ifndef EC_DOUBLYLINKEDLIST
#define EC_DOUBLYLINKEDLIST
class doublylinkedlist
{
	struct node
	{
		int datum; // placeholder
		node* prev;
		node* next;
	};
private:
	node *head = 0;
	node *tail = 0;
public:

	doublylinkedlist();
	doublylinkedlist(int datum);
	void add(int datum);
	void removeByIndex(int index);
	

};
#endif
