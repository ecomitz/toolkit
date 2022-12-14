// The test chamber for all of this code!
#include <iostream>
#include "singlylinkedlist.h"
using namespace std;

int main()
{
	singlylinkedlist* tester = new singlylinkedlist();
	cout << "Single node test:" << endl;
	tester->add(5);
	tester->traverse();
	cout << "Size expected: 1. Actual size returned: " << tester->getSize() << endl;
	cout << "Addition tests:" << endl;
	cout << "Two node test:" << endl;
	tester->add(10);
	tester->traverse();
	cout << "Size expected: 2. Actual size returned: " << tester->getSize() << endl;
	cout << "Three or more node test:" << endl;
	tester->add(15);
	tester->add(20);
	tester->add(25);
	tester->add(15);
	tester->traverse();
	cout << "Size expected: 6. Actual size returned: " << tester->getSize() << endl;
	cout << "Adding to index 1 (the second node)" << endl;
	tester->addByIndex(44, 1);
	tester->traverse();
	cout << "Size expected: 7. Actual size returned: " << tester->getSize() << endl;
	cout << "Adding to index 0 (the head)" << endl;
	tester->addByIndex(100, 0);
	tester->traverse();
	cout << "Size expected: 8. Actual size returned: " << tester->getSize() << endl;
	cout << "Adding to index 8 (One plus the tail. This will be the new tail): " << endl;
	cout << "Tail before: " << tester->tail->datum << endl;
	tester->addByIndex(1000, 8);
	cout << "Tail after: " << tester->tail->datum << endl;
	cout << "Size expected: 9. Actual size returned: " << tester->getSize() << endl;
	cout << "Deletion tests:" << endl;
	cout << "Want to delete a middle node. Will delete 15 at index 4." << endl;
	tester->removeByIndex(4);
	cout << "Size expected: 8. Actual size returned: " << tester->getSize() << endl;
	tester->traverse();
	cout << "Delete the head:" << endl;
	cout << "Head before: " << tester->head->datum << endl;
	tester->removeByIndex(0);
	cout << "Head after: " << tester->head->datum << endl;
	cout << "Size expected: 7. Actual size: " << tester->getSize() << endl;
	tester->traverse();
	cout << "Delete the tail:" << endl;
	cout << "Tail before: " << tester->tail->datum << endl;	
	tester->removeByIndex(5);
	cout << "Tail after: " << tester->tail->datum << endl;
	cout << "Size expected: 6. Actual size: " << tester->getSize() << endl;
	tester->traverse();
	cout << "Delete an invalid index:" << endl;
	tester->removeByIndex(10);
	cout << "Size expected: 6. Actual size: " << tester->getSize() << endl;
	tester->traverse();
	cout << "Copy test: The second list shall be a copy of the first list." << endl;
	cout << "First list: (Also expected in second list): " << endl;
	tester->traverse();
	singlylinkedlist* tester2 = new singlylinkedlist(tester->head);
	cout << "Second list actual values: " << endl;
	tester2->traverse();
	cout << "Expected size of second list: 6. Actual size: " << tester2->getSize() << endl;
	cout << "Find tests: " << endl;
	cout << "Searching for 5. Expected index: 0 (head). Actual index: " << tester2->find(5) << endl;
	cout << "Searching for 1000. Expected index: 5 (tail). Actual index: " << tester2->find(1000) << endl;
	cout << "Searching for 20. Expected index: 3. Actual index: " << tester2->find(20) << endl;
	cout << "Searching for 909. Expected index: -1. Actual index: " << tester2->find(909) << endl;
	cout << "Traverse with memory locations test: " << endl;
	cout << "List 1: ";
	tester->traverseWithMemLocs();
	cout << "List 2: ";
	tester2->traverseWithMemLocs();
	cout << "Calling deconstructor on second list." << endl;
	delete tester2;
	tester->traverse();
	singlylinkedlist *tester3 = new singlylinkedlist();
	unsigned int lim = 2000000;
	cout << "Absolutely huge linked list test: Every number from 0 to " << lim << "." << endl; // Used this one to find out that my add algorithm was improperly made!
	
	for (int i = 0; i < lim; i++)
	{
		tester3->add(i);
	}
	cout << "Done!" << endl;
	delete tester3;
	while (true) // Used to keep the program running for mem testing.
	{



	}
	
	//cout << sizeof(*tester3) << endl;
	

	return 0;



	

}


