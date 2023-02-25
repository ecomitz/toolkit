#ifndef EC_STRING_FUNCS
#define EC_STRING_FUNCS
#include <string>
struct ec_stringfuncs
{
	// Not yet fully implemented, see definition for details. Counts the amount of "words" found in the string, i.e sections separated by a space. 
	static unsigned int wordCount(std::string str);
	// Counts the amount of chars in a string, excluding whitespaces
	static unsigned int charCount(std::string str);
	// Counts the amount of chars in a string, not including a specific chracter as the second parameter
	static unsigned int charCount(std::string str, char delimiter);
	// Counts the amount of chars in a string, not including the characters found in the array of chars as the second parameter
	static unsigned int charCount(std::string str, char* delimiters);
	// Turns all lowercase letters in the string to its uppercase equivalent. Modifies the parameter string.
	void static allToLower(std::string* str);
	// Turns all lowercase letters in the string to its uppercase equivalent. Returns a copy of the string.
	std::string static allToLower(std::string str);
	// Turns all uppercase letters in the string to its lowercase equivalent. Modifies the parameter string.
	void static allToUpper(std::string* str);
	// Turns all uppercase letters in the string to its lowercase equivalent. Returns a copy of the string.
	std::string static allToUpper(std::string str);
	
	






};
#endif
