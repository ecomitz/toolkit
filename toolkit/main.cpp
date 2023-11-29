/* This program serves as a test chamber for various functions, data structures and code sections that may prove useful in any given situation
* Author: Eric Comitz
* In this section (Main.cpp) test cases are executed
*
*/
//----------------------------------------------------------------------------------------------
// Include and namespace usage section
#include "singlylinkedlist.h"
#include "singlylinkedlist.cpp"
#include "doublylinkedlist.h"
#include "doublylinkedlist.cpp"
#include "stringtests.h"
#include "ec_geometry.h"
#include "ec_mathtests.h"


//----------------------------------------------------------------------------------------------
// Test functions for main section declarations
void singlylinkedlistTests();
//----------------------------------------------------------------------------------------------
// Main section
int main()
{
	char input = 0;
	stringtests* p = stringtests::getInstance();
	while (input != '0')
	{
		cout << "Select a test to run: " << endl;
		cout << "0: End testing:" << endl;
		cout << "1: String function tests:" << endl;
		cout << "2: Mathematical functions tests:" << endl;
		cout << "3: Singly linked list tests:" << endl;
		cin >> input;
		switch (input)
		{
		case '0':
			return 0;
		case '1':
			p->testSelector();
			break;
		case '2': 
			ec_mathtests::testSelector();
			break;
		case '3':
			singlylinkedlistTests();
			break;
		default:
			cout << "Invalid option" << endl;
		}
	}
	
	
	
	return 0;

}
//----------------------------------------------------------------------------------------------
// Test function definitions
void singlylinkedlistTests()
{
	singlylinkedlist<int>* tester = new singlylinkedlist<int>();
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
	cout << "Tail before: " << tester->tail->data << endl;
	tester->addByIndex(1000, 8);
	cout << "Tail after: " << tester->tail->data << endl;
	cout << "Size expected: 9. Actual size returned: " << tester->getSize() << endl;
	cout << "Deletion tests:" << endl;
	cout << "Want to delete a middle node. Will delete 15 at index 4." << endl;
	tester->removeByIndex(4);
	cout << "Size expected: 8. Actual size returned: " << tester->getSize() << endl;
	tester->traverse();
	cout << "Delete the head:" << endl;
	cout << "Head before: " << tester->head->data << endl;
	tester->removeByIndex(0);
	cout << "Head after: " << tester->head->data << endl;
	cout << "Size expected: 7. Actual size: " << tester->getSize() << endl;
	tester->traverse();
	cout << "Delete the tail:" << endl;
	cout << "Tail before: " << tester->tail->data << endl;
	tester->removeByIndex(5);
	cout << "Tail after: " << tester->tail->data << endl;
	cout << "Size expected: 6. Actual size: " << tester->getSize() << endl;
	tester->traverse();
	cout << "Delete an invalid index:" << endl;
	tester->removeByIndex(10);
	cout << "Size expected: 6. Actual size: " << tester->getSize() << endl;
	tester->traverse();
	cout << "Copy test: The second list shall be a copy of the first list." << endl;
	cout << "First list: (Also expected in second list): " << endl;
	tester->traverse();
	singlylinkedlist<int>* tester2 = new singlylinkedlist<int>(tester->head);
	cout << "Second list actual values: " << endl;
	tester2->traverse();
	cout << "Expected size of second list: 6. Actual size: " << tester2->getSize() << endl;
	cout << "Find tests: " << endl;
	bool findTester = false; // initialized for compilation
	unsigned int spot = 500505050; // initalized for test purposes; no actual find should return this in these tests.
	cout << "Searching for 5. Expected index: 0 (head). Actual index: ";
	findTester = tester2->find(5, spot);
	if (findTester)
	{
		cout << spot << endl;
	}
	else
	{
		cout << "Not found." << endl;
	}
	cout << "Searching for 1000. Expected index: 5 (tail). Actual index: ";
	findTester = tester2->find(1000, spot);
	if (findTester)
	{
		cout << spot << endl;
	}
	else
	{
		cout << "Not found." << endl;
	}
	cout << "Searching for 20. Expected index: 3. Actual index: ";
	findTester = tester2->find(20, spot);
	if (findTester)
	{
		cout << spot << endl;
	}
	else
	{
		cout << "Not found." << endl;
	}
	cout << "Searching for 909. Expected index: Not found. Actual index: ";
	findTester = tester2->find(findTester, spot);
	if (findTester)
	{
		cout << spot << endl;
	}
	else
	{
		cout << "Not found." << endl;
	}
	cout << "Traverse with memory locations test: " << endl;
	cout << "List 1: ";
	tester->traverseWithMemLocs();
	cout << "List 2: ";
	tester2->traverseWithMemLocs();
	cout << "Calling deconstructor on second list." << endl;
	delete tester2;
	singlylinkedlist<int>* tester3 = new singlylinkedlist<int>();
	unsigned int lim = 2000000;
	cout << "Absolutely huge linked list test: Every number from 0 to " << lim << "." << endl; // Used this one to find out that my add algorithm was improperly made!

	for (unsigned int i = 0; i < lim; i++)
	{
		tester3->add(i);
	}
	cout << "Done!" << endl;
	bool unPause = false;
	cout << "Press 1 to unpause the debugger." << endl;
	while (unPause == 0)
	{
		cin >> unPause;


	}
	delete tester3;
	cout << "Reversal tests: " << endl;
	cout << "List 1 original: " << endl;
	tester->traverse();
	cout << "Now reversing:" << endl;
	tester->reverse();
	cout << "Expected: 1000, 25, 20, 10, 44, 5. Actual: ";
	tester->traverse();
	cout << "Expected size: 6. Actual size: " << tester->getSize() << endl;
	cout << "Now rereversing (i.e, running reverse on it again): " << endl;
	cout << "Expected: 5, 44, 10, 20, 25, 1000. Actual: " << endl;
	tester->reverse();
	tester->traverse();
	cout << "Reversed copy of a singly linked list test by different variable: Input: tester. Output: reversedTester. : " << endl;
	singlylinkedlist<int>* reversedTester = new singlylinkedlist<int>();
	cout << "Expected: 1000, 25, 20, 10, 44, 5. Actual: " << endl;
	//reversedTester->reverse(*tester); // NOT YET FUNCTIONAL. BREAKS PROGRAM.
	//reversedTester->traverse();




}