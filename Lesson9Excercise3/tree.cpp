#include <iostream>
#include "BinarySearchTree.h"


using namespace std;

int main(){

	BinarySearchTree bst;
	// The number of leaves that the tree will have
	int leaves;

	// Ask the user how many leaves does he wants
	cout << "How many numbers are you inserting? ";
	
	//store the value
	cin >> leaves;

	cout << endl;

	Node * root = NULL;

	//repeatthis statement the number of times the user will give a number
	for (int i = 0; i < leaves; i++)
	{
		//Ask the user for the number, and save it
		int number;
		cout << "Insert the number #" << i + 1 << endl;
		cin >> number;
		

		if(root == NULL){
			 root = new Node (number);
			bst.set_root(root);
		} else {
			bst.insert_integer(&root, number);
		}
		
	}

	cout << "No we will print the tree" << endl;

	bst.print_tree (bst.get_root());

	//cout << "Now we will delete the tree" << endl;

	//bst.terminate_tree(bst.get_root());

	

	int exit;
	cin >> exit;
	return 0;
}


