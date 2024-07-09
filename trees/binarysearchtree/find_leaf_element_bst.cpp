//find leaƒ elements in binary search tree
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void findLeafNodes(Node* root) {
    if (root == nullptr)
        return;

    // Recursively check left subtree
    findLeafNodes(root->left);

    // Check if the current node is a leaf
    if (root->left == nullptr && root->right == nullptr)
        cout << root->data << " "; // Print the leaf node's value

    // Recursively check right subtree
    findLeafNodes(root->right);
}

int main() {
    // Example BST
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->left = new Node(12);
    root->right->right = new Node(20);

    cout << "Leaf nodes in the BST: ";
    findLeafNodes(root);
    cout << endl;

    return 0;
}

