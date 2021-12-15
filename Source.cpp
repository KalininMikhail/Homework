#include <iostream>

using namespace std;

struct Map {
	int key;
	int value;
	Map* Left = nullptr;
	Map* Right = nullptr;

	Map(int key, int value) : key(key), value(value) {}
};

Map* insert(Map* root, int _key, int _value) {
    if (root == nullptr) {
        return new Map(_key, _value);
    }

    if (_key < root->key) {
        root->Left = insert(root->Left, _key, _value);
    }
    else {
        root->Right = insert(root->Right, _key, _value);
    }
    return root;
}
Map* searchElem(Map*& Map, int val)
{
    if (Map != NULL)
    {
        if (Map->value == val)
            return Map->key;
        else
            return searchElem(Map->Right, val);
        return searchElem(Map->Left, val);
    }
}
int Length(Map*& Map, int size = 0) {
    if (Map == nullptr) {
        return size;
    }
    return Length(Map->Left, size + 1) + Length(Map->Right, size + 1); // going insede the tree, adding alements to a size
}
void show(Map*& Map) { // Easy task
    if (Map != NULL)
    { // recoursively going inside the tree and printing keys and element of a node
        show(Map->Left);
        cout <<"key: " << Map->key << " value: " << Map->value << endl;
        show(Map->Right);
    }
}

int main() {

}