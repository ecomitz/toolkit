#include "tree.h"

template <class T>
tree<T>::tree()
{
	root = 0;
	size = 0;
}

template <class T>
tree<T>::~tree()
{
	// TODO: Implement
}

template <class T>
tree<T>::tree(T data)
{
	this->root = new node(data);
	this->size = 1;
}

template <class T>
void tree<T>::inOrder(node* root)
{
	// TODO: Implement
}

template <class T>
void tree<T>::preOrder(node* root)
{
	// TODO: Implement


}

template <class T>
void tree<T>::postOrder(node* root)
{
	// TODO: Implement
}

template <class T>
void tree<T>::insert(T data, node* parent)
{
	// TODO: Implement
}

template <class T>
void tree<T>::remove(node* selection)
{
	// TODO: Implement
}

template <class T>
bool tree<T>::search(T data, node* pointer)
{
	// TODO: Implement
	return false; // placeholder
}


template <class T>
unsigned int getSize()
{
	return this->size;
}