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
	cout << "Copy Test: The second list shall be a copy of the first list." << endl;
	cout << "First list: (Also expected in second list): " << endl;
	tester->traverse();
	singlylinkedlist* tester2 = new singlylinkedlist(tester->head);
	cout << "Second list actual values: " << endl;
	tester2->traverse();
	cout << "Expected size of second list: 6. Actual size: " << tester2->getSize();
	return 0;



	

}


