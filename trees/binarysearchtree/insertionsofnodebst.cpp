#include <iostream>
using namespace std;

struct Node{
    public:
    int data;
    Node* left;
    Node* right;

    public:
    Node(int data1){
        data = data1;
        left = right = NULL;
    }
    
};
Node* insertNode(Node* root,int key){
    if(root == NULL) return new Node(key);
    else if(root->data >key){
        root->left = insertNode(root->left,key);
    }else if(root->data <= key){
        root->right = insertNode(root->right,key);
    }
    return root;
}

Node* deleteNode(Node* root,int key){
    if(root == NULL) return root;

    if(root->data > key){
        root->left = deleteNode(root->left,key);
    }else if(root->data <= key){
        root->right = deleteNode(root->right,key);
    }
}
void preorder(Node* root){
    if(root == NULL){
        return;
    }else {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(Node* root){
    if(root == NULL){
        return;
    }else {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);

    }
}
void postorder(Node* root){
    if(root == NULL){
        return;
    }else{
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}
int main(){

     Node* root = NULL;
     root = insertNode(root,5);
     insertNode(root,2);
     insertNode(root,13);
     insertNode(root,89);
     insertNode(root,56);
     insertNode(root,34);
    cout<<"preorder :";
     preorder(root);
     cout<<"postorder :";
     postorder(root);
     cout<<"inorder :";
     inorder(root);


}