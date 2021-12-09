/**
Ya ne sovsem ponimau uslovie zadachi, kak proverit yavlyaetsya li derevo binarnim, no funciu, proviryaushuu yavlyaetsya li derevo dvouichmin derevom poiska u menya poluchilos sdetal
**/
#include <iostream>

using namespace std;

struct Node {
	int value;
	Node* Left = nullptr;
	Node* Right = nullptr;
	Node(int value) : value(value) {}
};

void show(Node*& Node) {
	if (Node != NULL)
	{
		show(Node->Left);
		cout << Node->value << endl;
		show(Node->Right);
	}
}
int treeLength(Node*& Node, int size = 0) { 
	if (Node == nullptr) {
		return size;
	}
	return max(treeLength(Node->Left, size + 1), treeLength(Node->Right, size + 1));
}

Node* insert(Node* root, int key) {
    if (root == nullptr) {
        return new Node(key);
    }

    if (key < root->value) {
        root->Left = insert(root->Left, key);
    }
    else {
        root->Right = insert(root->Right, key);
    }
    return root;
}


int BinarySearchTree(struct Node* node){// 
	if (node == NULL)//If tree is empty it is BST
		return 1;

	if (node->Left != NULL && node->Left->value > node->value)// If left child is more than parent than it is not BST
		return 0;

	if (node->Right != NULL && node->Right->value < node->value)// is roght child is more than parent than is is not BST
		return 0;

	if (!BinarySearchTree(node->Left) || !BinarySearchTree(node->Right)) // recursively getting inside the tree
		return 0;

	return 1;
}

int main() {

}