#ifndef EC_TREE
#define EC_TREE
// Nothing in this class is implemented yet.
template <class T> 
class binarysearchtree
{

	struct node
	{
		T data; // placeholder
		node* left;
		node* right;
	};
	node* root;
private:

public:
	binarysearchtree();
	~binarysearchtree();
	void inOrder();
	void preOrder();
	void postOrder();
	void insert(T datum);
	void remove(T datum);
	T search(T datum);
};
#endif
