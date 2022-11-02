#include "doublylinkedlist.h"


doublylinkedlist::doublylinkedlist()
{
	head = new node;
	head->next = 0;
	head->prev = 0;
	tail = head;
}

doublylinkedlist::doublylinkedlist(int datum)
{
	head = new node;
	head->datum = datum;
	head->next = 0;
	head->prev = 0;
	tail = head;
	
	
}

void doublylinkedlist::add(int datum)
{
	return; // placeholder
}
