#include <iostream>
using namespace std;

class Tree{
public:
	int data;
	Tree* left;
	Tree* right;
	Tree(int element) {
		this->data = element;
		this->left = NULL;
		this->right = NULL;
}
};

void InOrder(Tree* root) {
	if (root == NULL) {
		return;
	}
	InOrder(root->left);
	cout << root->data << " ";
	InOrder(root->right);
}

void PostOrder(Tree* root) {
	if (root == NULL) {
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	cout << root->data << " ";
}

void PreOrder(Tree* root) {
	if (root == NULL) {
		return;
	}
	cout << root->data << " ";
	PreOrder(root->left);
	PreOrder(root->right);
}

int main() {
	Tree* root = new Tree(8);
	root->left = new Tree(5);
	root->right = new Tree(4);
	root->left->left = new Tree(9);
	root->left->right = new Tree(7);
	root->left->right->left = new Tree(1);
	root->left->right->right = new Tree(12);
	root->left->right->right->left = new Tree(2);

	root->right->right = new Tree(11);
	root->right->right->left = new Tree(3);
	
	InOrder(root);
	cout << endl;
	PostOrder(root);
	cout << endl;
	PreOrder(root);
	
	return 0;
}