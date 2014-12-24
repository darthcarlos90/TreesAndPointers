#include "node.h"
#include <iostream>

Node::Node(int input_value):
	value(input_value){
		left = NULL;
		right = NULL;
}


Node* Node::get_left(){
	return left;
}

Node* Node::get_right(){
	return right;
}

int Node::get_value() const {
	return value;
}

void Node::set_right (Node* new_right){
	right = new_right;
}

void Node::set_left (Node* new_left){
	left = new_left;
}

bool Node::has_left()  const{
	if(left != NULL)
		return true;
	else return false;
}

bool Node::has_right() const {
	if(right != NULL)
		return true;
	else return false;
}