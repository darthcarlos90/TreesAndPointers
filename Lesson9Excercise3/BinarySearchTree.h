#include "node.h"

class BinarySearchTree{
public:
	BinarySearchTree(Node *first_node);
	BinarySearchTree();
	~BinarySearchTree();
	Node *get_root();
	void set_root(Node* new_root);
	void print_tree(Node* root);
	bool has_value(Node leaf, int value);
	void insert_integer(Node ** tree, int value);
	void terminate_tree(Node * tree);
private:
	Node *root;
};