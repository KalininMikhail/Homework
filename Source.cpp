#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
	int value;
	Node* Left = nullptr;
	Node* Right = nullptr;
    Node(int value) : value(value) {}
};


void searchKey(Node*& curr, int key, Node*& parent){
    while (curr != nullptr && curr->value != key){
        parent = curr;
        if (key < curr->value) {
            curr = curr->Left;
        }
        else {
            curr = curr->Right;
        }
    }
}
Node* getMinimumKey(Node* curr){
    while (curr->Left != nullptr) {
        curr = curr->Left;
    }
    return curr;
}
void show(Node*& Node){
    if (Node != NULL)              
    {
        show(Node->Left);           
        cout << Node->value << endl;           
        show(Node->Right);          
    }
}
int treeLength(Node*& Node, int size = 0){// task 2
    if (Node == nullptr) {
        return size;
    }
    return max(treeLength(Node->Left, size + 1), treeLength(Node->Right, size + 1));
}
Node* insert(Node* root, int key){
    if (root == nullptr) {
        return new Node(key);
    }

    if (key < root-> value) {
        root->Left  = insert(root->Left, key);
    }
    else {
        root->Right = insert(root->Right, key);
    }
    return root;
}

void deleteNode(Node*& root, int key){ // task 1
    Node* parent = nullptr;
    Node* curr = root;
    searchKey(curr, key, parent);
    if (curr == nullptr) {
        return;
    }
    if (curr->Left == nullptr && curr->Right == nullptr){
        if (curr != root)
        {
            if (parent->Left == curr) {
                parent->Left = nullptr;
            }
            else {
                parent->Right = nullptr;
            }
        }
        else {
            root = nullptr;
        }
        free(curr);        
    }
    else if (curr->Left && curr->Right){
        Node* successor = getMinimumKey(curr->Right);
        int val = successor->value;
        deleteNode(root, successor->value);
        curr->value = val;
    }
    else {
        Node* child = (curr->Left) ? curr->Left : curr->Right;
        if (curr != root)
        {
            if (curr == parent->Left) {
                parent->Left = child;
            }
            else {
                parent->Right = child;
            }
        }
        else {
            root = child;
        }
        free(curr);
    }
}

int main() {
    
}