#include "singlylinkedlist.h"



	void singlylinkedlist::add(int data)
	{
		if (head == 0)
		{
			head = new node;
			head->data = data;
			tail = head;
			return;
		}
		else if (tail == head)
		{
			tail = new node;
			head->next = tail;
			tail->data = data;
			tail->next = 0;
		}
		else
		{
			node *traverser;
		}
	
	}
