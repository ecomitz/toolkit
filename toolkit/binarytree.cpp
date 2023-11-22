#include "binarytree.h"


template <class T>
binarytree<T>::binarytree()
{
	this->size = 0;
	this->root = 0;
	this->selfBalancing = false;
}

template <class T>
binarytree<T>::binarytree(T data)
{
	this->size = 1;
	this->root = new node(data);
	this->selfBalancing = false;
}

template <class T>
binarytree<T>::binarytree(bool selfBalancing)
{
	this->size = 0;
	this->root = 0;
	this->selfBalancing = selfBalancing;
}

template <class T>
binarytree<T>::binarytree(T data, bool selfBalancing)
{
	this->size = 1;
	this->root = new node(data);
	this->selfBalancing = selfBalancing;
}

template <class T>
binarytree<T>::~binarytree()
{
	// TODO: Implement
}

template <class T>
unsigned int binarytree<T>::getSize()
{
	return this->size;
}

template <class T>
unsigned int binarytree<T>::getHeight()
{
	return this->height;
}

template <class T>
bool binarytree<T>::getSelfBalancing()
{
	return this->selfBalancing;
}

template <class T>
void binarytree<T>::setSelfBalancing(bool selfBalancing)
{
	this->selfBalancing = selfBalancing;
}

template <class T>
void binarytree<T>::insert(T data)
{
	// TODO: Implement
}