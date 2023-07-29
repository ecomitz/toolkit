#include "stringTests.h"

stringTests* stringTests::singleton = 0;

stringTests* stringTests::getInstance()
{
	if (singleton == NULL)
	{
		singleton = new stringTests();
	}
	return singleton;
}

void stringTests::charCountTests(stringTests *p)
	{
	//stringTests* p = getInstance();
		cout << "charCount tests: " << endl;
		cout << "String: " << p->noWords << " | Expected: " << 0 << " Actual: " << ec_stringfuncs::charCount(p->noWords) << endl;
		cout << "String: " << p->oneWord << " | Expected: " << 12 << " Actual: " << ec_stringfuncs::charCount(p->oneWord) << endl;
		cout << "String: " << p->twoWords << " | Expected: " << 12 << " Actual: " << ec_stringfuncs::charCount(p->twoWords) << endl;
		cout << "String: " << p->threeWords << " | Expected: " << 12 << " Actual: " << ec_stringfuncs::charCount(p->threeWords) << endl;
		cout << "String: " << p->fourWords << " | Expected: " << 12 << " Actual: " << ec_stringfuncs::charCount(p->fourWords) << endl;
		cout << "String: " << p->oneWordPrecedingAndLeadingWhiteSpace << " | Expected: " << 12 << " Actual: " << ec_stringfuncs::charCount(p->oneWordPrecedingAndLeadingWhiteSpace) << endl;
		cout << "String: " << p->twoWordsPrecedingAndLeadingWhiteSpacesWithExtraSpace << " | Expected: " << 12 << " Actual: " << ec_stringfuncs::charCount(p->twoWordsPrecedingAndLeadingWhiteSpacesWithExtraSpace) << endl;
		cout << "String (one white space): " << p->noWordsButOneWhiteSpace << " | Expected: " << 0 << " Actual: " << ec_stringfuncs::charCount(p->noWordsButOneWhiteSpace) << endl;
		cout << "---------------------------------------------------------------------------------------------- " << endl;
	}

void stringTests::wordCountTests(stringTests *p)
	{
	//stringTests* p = getInstance();
		cout << "wordCount tests: " << endl;
		cout << "String: " << p->noWords << " | Expected: " << 0 << " Actual: " << ec_stringfuncs::wordCount(p->noWords) << endl;
		cout << "String: " << p->oneWord << " | Expected: " << 1 << " Actual: " << ec_stringfuncs::wordCount(p->oneWord) << endl;
		cout << "String: " << p->twoWords << " | Expected: " << 2 << " Actual: " << ec_stringfuncs::wordCount(p->twoWords) << endl;
		cout << "String: " << p->threeWords << " | Expected: " << 3 << " Actual: " << ec_stringfuncs::wordCount(p->threeWords) << endl;
		cout << "String: " << p->fourWords << " | Expected: " << 4 << " Actual: " << ec_stringfuncs::wordCount(p->fourWords) << endl;
		cout << "String: " << p->oneWordPrecedingAndLeadingWhiteSpace << " | Expected: " << 1 << " Actual: " << ec_stringfuncs::wordCount(p->oneWordPrecedingAndLeadingWhiteSpace) << endl;
		cout << "String: " << p->twoWordsPrecedingAndLeadingWhiteSpacesWithExtraSpace << " | Expected: " << 2 << " Actual: " << ec_stringfuncs::wordCount(p->twoWordsPrecedingAndLeadingWhiteSpacesWithExtraSpace) << endl;
		cout << "String (one white space): " << p->noWordsButOneWhiteSpace << " | Expected: " << 0 << " Actual: " << ec_stringfuncs::wordCount(p->noWordsButOneWhiteSpace) << endl;
		cout << "---------------------------------------------------------------------------------------------- " << endl;
	}
void stringTests::countCharTests(stringTests* p)
{
	cout << "countChar tests: " << endl;
	cout << "wordCount tests: " << endl;
	cout << "String: " << p->noWords << " | Target: z" << " | Expected: " << 0 << " Actual: " << ec_stringfuncs::countChar(p->noWords, 'z') << endl;
	cout << "String: " << p->oneWord << " | Target: n" << " | Expected: " << 1 << " Actual: " << ec_stringfuncs::countChar(p->oneWord, 'n') << endl;
	cout << "String: " << p->twoWords << " | Target: e" << " | Expected: " << 2 << " Actual: " << ec_stringfuncs::countChar(p->twoWords, 'e') << endl;
	cout << "String: " << p->fourysThreets << " | Target: t" <<" | Expected: " << 3 << " Actual: " << ec_stringfuncs::countChar(p->fourysThreets, 't') << endl;
	cout << "String: " << p->fourysThreets << " | Target: y" <<" | Expected: " << 4 << " Actual: " << ec_stringfuncs::countChar(p->fourysThreets, 'y') << endl;
	cout << "String: " << p->fourys << " | Target: y " << " | Expected: " << 4 << " Actual : " << ec_stringfuncs::countChar(p->fourys, 'y') << endl;
	cout << "String (one white space): " << p->noWordsButOneWhiteSpace << " | Target: a" << " | Expected: " << 0 << " Actual: " << ec_stringfuncs::countChar(p->noWordsButOneWhiteSpace, 'a') << endl;
	cout << "String (one white space): " << p->noWordsButOneWhiteSpace << " | Target: (white space)" << " | Expected: " << 1 << " Actual: " << ec_stringfuncs::countChar(p->noWordsButOneWhiteSpace, ' ') << endl;
	cout << "---------------------------------------------------------------------------------------------- " << endl;
}

void stringTests::allTests()
	{
	stringTests* p = getInstance();
		cout << "String Tests: \n---------------------------------------------------------------------------------------------- " << endl;
		charCountTests(p);
		wordCountTests(p);
		countCharTests(p);
		cout << "\n---------------------------------------------------------------------------------------------- " << endl;
	}
