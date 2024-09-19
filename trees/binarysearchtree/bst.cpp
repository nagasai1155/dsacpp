#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* left,*right;
    public:
    Node(int d,Node*left,Node*right){
        data = d;
        left = left;
        right = right;
    }
    Node(int d){
        data = d;
        left = right = nullptr;
    }
};
Node* insert(Node* root,int key){
    if(root == NULL) return new Node(key);
    else if(root->data > key){
        root->left = insert(root->left,key);
    }else{
        root->right = insert(root->right,key);
    }
    return root;
}
void preorder(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
         Node* root = NULL;
         root=insert(root,11);
         insert(root,2);
         insert(root,3);
         insert(root,23);
         insert(root,45);

         preorder(root);



}