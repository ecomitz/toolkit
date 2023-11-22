#ifndef EC_BINARYTREE
#define EC_BINARYTREE

template <class T>
class binarytree
{
private:
	unsigned int size;
	bool selfBalancing;
	unsigned int height;

public:

	struct node
	{
		T data;
		node* left;
		node* right;
		node(T data)
		{
			this->data = data;
			left = 0;
			right = 0;
		}
	};
	node* root;
	binarytree();
	binarytree(T data);
	binarytree(bool selfBalancing);
	binarytree(T data, bool selfBalancing);
	~binarytree();
	// Returns the amount of nodes in the tree
	unsigned int getSize();
	// Returns the height (i.e max amount of node traversals from root to a leaf) of the tree
	unsigned int getHeight();
	bool getSelfBalancing();
	void setSelfBalancing(bool val);
	void insert(T data);
	//void insert(T data, node* spot);
	


};
#endif
