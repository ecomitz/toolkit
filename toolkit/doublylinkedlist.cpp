#include "doublylinkedlist.h"


doublylinkedlist::doublylinkedlist()
{
	head = new node;
	tail = new node;
}

doublylinkedlist::doublylinkedlist(int datum)
{
	head = new node;
	head->datum = datum;
	tail = head;
	head->next = 0;
	head->prev = 0;
}
