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
left= right = NULL;
     }

};
void preorder(Node* root){
    if(root == NULL) return;
    else{
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(Node* root){
    if(root == NULL) return;
    else{
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
void postorder(Node* root){
    if(root == NULL) return;
    else{
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}
int main(){

Node* root = new Node(1);
root->left= new Node(2);
root->right = new Node(6);
root->left->left = new Node(4);
root->right->left= new Node(9);
root->right->right = new Node(44);
cout<<"preorder: ";
preorder(root);
cout<<endl;
cout<<"inorder:";
inorder(root);
cout<<endl;
cout<<"postorder : ";
postorder(root);


}