#include "stack.h"

template <class T>
void stack<T>::pop()
{
	internal->removeTail();
}


template <class T>
void stack<T>::push(T data)
{
	internal->add(T);
}

template<class T>
unsigned int stack<T>::getSize()
{
	return internal->getSize();
}
