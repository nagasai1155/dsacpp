//find inorder successor in binary search tree
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int key) {
    if (root == nullptr)
        return new Node(key);
    if (key < root->data)
        root->left = insert(root->left, key);
    else if (key > root->data)
        root->right = insert(root->right, key);
    return root;
}

Node* inOrderSuccessor(Node* root, int key) {
    if (root == nullptr)
        return nullptr;

    Node* successor = nullptr;
    while (root != nullptr) {
        if (root->data > key) {
            successor = root;
            root = root->left;
        } else {
            root = root->right;
        }
    }
    return successor;
}

void inorder(Node* root) {
    if (root == nullptr)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;
    root = insert(root, 8);
    insert(root, 4);
    insert(root, 3);
    insert(root, 98);
    insert(root, 23);
    insert(root, 43);

    cout << "In-order traversal: ";
    inorder(root);
    cout << endl;

    int key = 23;
    Node* successor = inOrderSuccessor(root, key);
    if (successor)
        cout << "In-order successor of " << key << ": " << successor->data << endl;
    else
        cout << key << " has no in-order successor." << endl;

    return 0;
}
