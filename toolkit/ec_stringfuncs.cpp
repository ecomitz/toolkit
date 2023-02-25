#include "ec_stringfuncs.h"


unsigned int ec_stringfuncs::wordCount(std::string str)
{
	// NEEDED IMPLEMENTATION: Scenario where string consists of nothing but whitespaces.
	// NEEDED IMPLEMENTATION: Scenario where there are multiple spaces between "words"

	// Step 1: Test to see if it is an empty string. If so, return a length of 0 "words".
	if (str.length() == 0)
	{
		return 0;
	}

	// Step 2: Assume a white space count of 1; i.e it all one "word".
	unsigned int whiteSpaceCount = 1;
	


	// Step 3: Iterate through all the letters in the string
	for (unsigned int i = 0; i < str.length(); i++)
	{
		// Step 4: Test if a current spot is a whitespace. If it is, iterate the white space count.
		if (str[i] == ' ')
		{
			whiteSpaceCount++;
		}
	}


	return whiteSpaceCount; 

}

unsigned int ec_stringfuncs::charCount(std::string str)
{
	// Iterate through the whole string, adding one unless it is a whitespace.
	// Step 1: Assume a char count of 0
	unsigned int charCount = 0; 
	// Step 2: Iterate through the string
	for (unsigned int i = 0; i < str.length(); i++)
	{
		// Step 3: test if current char is not a whitespace
		if (str[i] != ' ')
		{
			charCount++;
		}
	}
	return charCount;
}
