
#ifndef tree_h
#define tree_h

struct Node
{
	Node *left;
	Node *right;
	int data;
	Node(int val);
};

class Tree
{
	Node *root;
public:
	Node* get_root();
	Tree();
	Tree(const Tree &tree);
	~Tree();
	void clean(Node * &node);
	bool remove(int val);
	bool find(int val);
	bool insert(int val);

	void print(Node *node);
};
#endif

