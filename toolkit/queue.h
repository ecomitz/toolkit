#ifndef EC_QUEUE
#define EC_QUEUE
// Nothing in this class is implemented yet.
// Uses the FIFO principle. First in, first out.
#include "singlylinkedlist.h"
template <class T>
class queue
{
private:
	singlylinkedlist<T> internal;

public:
	queue();
	queue(T datum);




	void dequeue();
	void enqueue(T datum);
	// Returns the amount of objects in the queue.
	unsigned int size();
	// Returns the first occurrence of specified datum.
	unsigned int pos(T datum);
};
#endif
