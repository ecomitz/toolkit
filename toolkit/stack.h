#ifndef EC_STACK
#define EC_STACK
// Nothing in this class is implemented yet.
// Uses the LIFO (Last in, first out) principle. 
#include "doublylinkedlist.h"
template <class T>
class stack
{
private:
	doublylinkedlist<T> internal;


public:
	// Removes from the stack
	void pop();
	// Adds to the stack.
	void push(T data);
	// Returns the size of the stack. 
	unsigned int getSize();


};
#endif
