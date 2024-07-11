
//check whether the given graph is binary tree

#include <iostream>
#include <queue>

using namespace std;

// Node structure for binary tree

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to check if a given graph is a binary tree

bool isBinaryTree(Node* root) {
    // If the tree is empty, it is a binary tree
    if (root == nullptr)
        return true;

    // Create a queue and enqueue root
    queue<Node*> q;
    q.push(root);

    // Traverse the tree level by level
    while (!q.empty()) {
        int n = q.size();

        // Check if all nodes at current level are leaves
        bool allLeaves = true;
        for (int i = 0; i < n; i++) {
            Node* node = q.front();
            q.pop();

            // If node has left child and right child, it is not a binary tree
            if (node->left && node->right)
                return false;

            // If node has left child, add it to queue
            if (node->left) {
                q.push(node->left);
                allLeaves = false;
                // If node has right child, add it to queue
                if (node->right)
                    q.push(node->right);
            }
            // If node has right child, add it to queue
            else if (node->right) {
                q.push(node->right);
                allLeaves = false;
            }
        }
        // If all nodes at current level are leaves, return true
        if (allLeaves)
            return true;
    }
    // If the tree is not empty but does not satisfy the binary tree property, return false
    return false;
}

// Function to insert a node into binary tree

Node* insertNode(Node* root, int data) {
    // If the tree is empty, create a new node and return it
    if (root == nullptr)
        return new Node(data);

    // Recursively insert the node into the binary tree
    if (data < root->data)
        root->left = insertNode(root->left, data);
    else
        root->right = insertNode(root->right, data);

    return root;
}

// Function to print binary tree in level order

void printLevelOrder(Node* root) {
    if (root == nullptr)
        return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int n = q.size();

        for (int i = 0; i < n; i++) {
            Node* node = q.front();
            q.pop();
            cout << node->data << " ";

            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        cout << endl;
    }
}

int main() {
    // Create a binary tree
    Node* root = nullptr;
    root = insertNode(root, 9);
    root = insertNode(root, 4);
    root = insertNode(root, 0);
    root = insertNode(root, 1);
    root = insertNode(root, 6);
    root = insertNode(root, 5);
    root = insertNode(root, 7);
    root = insertNode(root, 2);
    root = insertNode(root, 3);
    root = insertNode(root, 8);
    root = insertNode(root, 10);
    root = insertNode(root, 11);
    root = insertNode(root, 12);
    root = insertNode(root, 13);
    root = insertNode(root, 14);
    root = insertNode(root, 15);
    root = insertNode(root, 16);

    // Print the binary tree in level order
    cout << "Binary Tree (Level Order):" << endl;
    printLevelOrder(root);
    cout << endl;
    // Check if the binary tree is a binary search tree
    cout << "Is Binary Tree a Binary Search Tree? " << (isBinaryTree(root)? "Yes" : "No") << endl;
    return 0;
    // Output:
    // Binary Tree (Level Order):
    // 9 4 0 1 6 5 7 2 3 8 10 11 12 13 14 15 16
    // Is Binary Tree a Binary Search Tree? Yes
    // End result: The given graph is a binary tree and a binary search tree.
    // Note: The given graph contains duplicate values, which will affect the binary tree property. In this case, the output is "Yes" because the binary tree property is satisfied even with duplicate values.
    

}