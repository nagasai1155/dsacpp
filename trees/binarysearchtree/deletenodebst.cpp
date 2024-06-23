#include<iostream>
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
Node* inorderSuccessor(Node* root){
    Node* curr = root;
    while(curr && curr->left){
        curr = curr->left;
    }
    return curr;
}
Node*  insertnodeBST(Node* root,int value){
    if(root == NULL) return new Node(value);
    if(root->data > value){
        root->left = insertnodeBST(root->left,value);
    }
    else if(root->data< value){
        root->right = insertnodeBST(root->right,value);
    }
    return root;
}
Node* delteNode(Node* root,int key){

    if(root == NULL) return root;

    else if(root->data > key){
        root->left = delteNode(root->left,213);
    }else if(root->data < key){
        root->right= delteNode(root->right,213);
    }
    //if root had one or two children

    else{
        if(root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        //if root node has two childrens finding inordersuccessor means root->right =>left most leaf node
        Node* temp = inorderSuccessor(root->right);
        root->data = temp->data;
        //now delete the inorder successor 
        root->right = delteNode(root->right,temp->data);
        
    }
    return root;
}
void preorder(Node* root){
    if(root == NULL) return;
    else {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);


    }
}
 
int main(){
  
  Node* root = NULL;
  root = insertnodeBST(root,3);
        insertnodeBST(root,45);
        insertnodeBST(root,213);
        insertnodeBST(root,13);
        insertnodeBST(root,34);
        insertnodeBST(root,1222);
        cout<<"preorder: :";
        preorder(root);

        cout<<"now deletion of required node : ";
        root = delteNode(root,213);
        preorder(root);
}
