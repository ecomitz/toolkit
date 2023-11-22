#ifndef EC_TREE
#define EC_TREE
// A tree is a data structure whereas it has nodes with data and pointers to other nodes. 
// WIP
template <class T> 
class tree
{
private:

	unsigned int size;
public:

	struct node
	{
		T data;
		node** leaves;
		unsigned int leafCount;
		node(T data)
		{
			this->data = data;
			this->leaves = 0;
			leafCount = 0;
		}
	};
	node* root;

	tree();
	~tree();
	tree(T data);
	void inOrder(node* root);
	void preOrder(node* root);
	void postOrder(node* root);
	void insert(T data, node* parent);
	void remove(node* selection);
	bool search(T data, node* pointer);
	unsigned int getSize();
};
#endif
