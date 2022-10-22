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
	cout << "Two node test:" << endl;
	tester->add(10);
	tester->traverse();
	cout << "Three or more node test:" << endl;
	tester->add(15);
	tester->add(20);
	tester->add(25);
	tester->add(15);
	tester->traverse();
	cout << "Deletion tests:" << endl;
	cout << "Want to delete a middle node. Will delete 15 at index 2." << endl;
	tester->removeByIndex(2);
	tester->traverse();
	cout << "Delete the head:" << endl;
	tester->removeByIndex(0);
	tester->traverse();
	cout << "Delete the tail:" << endl;
	tester->removeByIndex(3);
	tester->traverse();
	cout << "Delete an invalid index:" << endl;
	tester->removeByIndex(10);
	tester->traverse();
	cout << "Adding to index 1 (the second node)" << endl;
	tester->addByIndex(44, 1);
	tester->traverse();
	cout << "Adding to index 0 (the head)" << endl;
	tester->addByIndex(100, 0);
	tester->traverse();
	return 0;



	

}


