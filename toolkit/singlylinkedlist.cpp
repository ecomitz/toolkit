#include "singlylinkedlist.h"

	// All scenarios need test cases

	void singlylinkedlist::add(int data)
	{
		// Scenario: No nodes exist yet
		if (head == 0)
		{
			head = new node;
			head->data = data;
			tail = head;
			return;
		}
		// Scenario: Only 1 node exists
		else if (tail == head)
		{
			tail = new node;
			head->next = tail;
			tail->data = data;
			tail->next = 0;
			return;
		}
		
		 // Scenario: There is already 2 nodes present. 
			node *traverser = head;
			node* trailer;
			while (traverser != 0)
			{
				trailer = traverser;
				traverser = traverser->next;			
			}
			traverser = new node;
			traverser->data = data;
			traverser->next = 0;
			trailer->next = traverser;
	
	}
