//find the boundary elements of binary treee in c++;
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void printLeftBoundary(Node* root) {
    if (root == nullptr)
        return;
    if (root->left || root->right)
        cout << root->data << " "; // Print non-leaf nodes

    if (root->left)
        printLeftBoundary(root->left);
    else
        printLeftBoundary(root->right);
}

void printLeafNodes(Node* root) {
    if (root == nullptr)
        return;
    printLeafNodes(root->left);
    if (!root->left && !root->right)
        cout << root->data << " "; // Print leaf nodes
    printLeafNodes(root->right);
}

void printRightBoundary(Node* root) {
    if (root == nullptr)
        return;
    if (root->right)
        printRightBoundary(root->right);
    else
        printRightBoundary(root->left);

    if (root->left || root->right)
        cout << root->data << " "; // Print non-leaf nodes
}

void printBoundaryElements(Node* root) {
    if (root == nullptr)
        return;

    cout << root->data << " "; // Print root

    printLeftBoundary(root->left);
    printLeafNodes(root);
    printRightBoundary(root->right);
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(3);
    root->left->right = new Node(7);
    root->right->left = new Node(12);
    root->right->right = new Node(20);

    cout << "Boundary elements of the binary tree: ";
    printBoundaryElements(root);
    cout << endl;

    return 0;
}
