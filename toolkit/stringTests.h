#ifndef EC_STRING_TESTS
#define EC_STRING_TESTS

#include <string>
#include <iostream>
#include "ec_stringfuncs.h"
using namespace std;
class stringtests
{
private:

	static stringtests* singleton;
	stringtests()
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
	static stringtests* getInstance();
	static void charCountTests(stringtests *p);
	static void wordCountTests(stringtests *p);
	static void countCharTests(stringtests *p);
	static void allTests();
	~stringtests()
	{
		delete singleton;
	}
};



#endif
