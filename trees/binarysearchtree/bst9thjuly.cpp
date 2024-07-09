#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//implementation of binary search treee

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
Node* insert(Node* root,int key){
    if(root == NULL) return new Node(key);
    if(key<root->data){
        root->left = insert(root->left,key);
    }else if(key >root->data){
        root->right = insert(root->right,key);
    }
    return root;
}
Node* inordersuccessor(Node* root);
Node* deleteNode(Node* root,int key){
    if(root == NULL) return root;
    //finding the node to deleted
    if(root->data > key){
        root->left = deleteNode(root->left,key);

    }else if(root->data <key){
        root->right = deleteNode(root->right,key);
    }else{
    //if node has one or no children
    if(root->left==NULL){
        Node* temp = root->right;
        free(root);
        return temp;
    }
    if(root->right == NULL){
        Node* temp = root->left;
        free(root);
        return temp;
    }
    //if(node ) has two childrens;
    Node* temp = inordersuccessor(root->right);
     root->data = temp->data;
     //delete inordersuccessor
     root->right = deleteNode(root->right,temp->data);
     }
     return root;

}
Node* inordersuccessor(Node* root){
    Node* curr = root->right;
    while(curr != NULL && curr->left != NULL){
        curr = curr->left;
    }
    return curr;
}

void preorder(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node* root){
        if(root == NULL) return;
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
}
int main(){
    Node* root = NULL;
    root = insert(root,8);
    insert(root,4);
    insert(root,3);
    insert(root,98);
    insert(root,23);
    insert(root,43);
    cout<<"preorder : ";
    preorder(root);
    cout<<endl;
    cout<<"inorder :";
    inorder(root);
    cout<<endl;
    cout<<"postorder: ";
    postorder(root);
cout<<endl;
    cout<<"after deletion of node: "<<endl;
   root= deleteNode(root,98);
    cout<<"preorder : ";
    preorder(root);
    cout<<endl;
    cout<<"inorder :";
    inorder(root);
    cout<<endl;
    cout<<"postorder: ";
    postorder(root);

}