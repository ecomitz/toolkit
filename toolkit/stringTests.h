#ifndef EC_STRING_TESTS
#define EC_STRING_TESTS

#include <string>
#include <iostream>
#include "ec_stringfuncs.h"
using namespace std;
class stringTests
{
private:

	static stringTests* singleton;
	stringTests()
	{

	}


public:
	string noWords = "";
	string noWordsButOneWhiteSpace = " ";
	string oneWord = "KenOfTheRoad";
	string twoWords = "KenOf TheRoad";
	string threeWords = "Ken Of TheRoad";
	string fourWords = "Ken Of The Road";
	string oneWordPrecedingAndLeadingWhiteSpace = " KenOfTheRoad ";
	string twoWordsPrecedingAndLeadingWhiteSpacesWithExtraSpace = " KenOf TheRoad ";
	string fourys = "yyyy";
	string fourysThreets = "tyytyyt";
	static stringTests* getInstance();
	static void charCountTests(stringTests *p);
	static void wordCountTests(stringTests *p);
	static void countCharTests(stringTests *p);
	static void allTests();
	~stringTests()
	{
		delete singleton;
	}
};



#endif
