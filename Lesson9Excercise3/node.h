class Node {
public:
	Node(int input_value);
	Node* get_left();
	Node* get_right();
	int get_value() const;
	void set_right(Node* new_right);
	void set_left (Node* new_left);
	bool has_right() const;
	bool has_left() const;
private:
	Node * left;
	Node* right;
	int value;
};
