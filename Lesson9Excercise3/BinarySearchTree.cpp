#include "BinarySearchTree.h"
#include <iostream>



BinarySearchTree::BinarySearchTree (Node *first_node):
	root(first_node){}

BinarySearchTree::BinarySearchTree(){
	root = NULL;
}

BinarySearchTree::~BinarySearchTree(){
	terminate_tree(root);
}

Node* BinarySearchTree:: get_root(){
	return root;
}

void BinarySearchTree::set_root(Node* new_root){
	root = new_root;
}

void BinarySearchTree::print_tree(Node* root){
	Node leaf = *root;
	if(leaf.has_left() == true)
		print_tree(leaf.get_left());
	if (leaf.has_right() == true){
		std::cout << leaf.get_value() << std::endl;
		print_tree(leaf.get_right());
	} else std:: cout<< leaf.get_value() << std::endl;
}

bool BinarySearchTree::has_value(Node leaf, int number){
	if(leaf.get_value() == number)
		return true;
	else {
		if(number > leaf.get_value()){
			if(leaf.has_right())
				return has_value(*leaf.get_right(), number);
			else return false;
		} else {
			if(leaf.has_left())
				return has_value(*leaf.get_left(), number);
			else return false;
		}
	}
}

void BinarySearchTree::insert_integer (Node ** tree, int value){
	Node temp = **tree;
	
	if(temp.get_value() < value){
		if(temp.has_right()){
			Node* right_node = temp.get_right();
			insert_integer(&right_node, value);
		}
		else 
			temp.set_right(new Node(value));
		
	} else if(temp.get_value() > value){
		if(temp.has_left()){
			Node* left_node = temp.get_left();
			insert_integer(&left_node, value);
		}
			
		else 
			temp.set_left(new Node(value));
		
		
	}

	**tree = temp;
}

void BinarySearchTree::terminate_tree(Node * tree) {
	Node leaf = *tree;
	if(leaf.has_left())
		terminate_tree(leaf.get_left());

	if(leaf.has_right())
		terminate_tree(leaf.get_right());

	std::cout << "Deleting node " << leaf.get_value() << "\n";
	delete tree;
	tree = NULL;
}