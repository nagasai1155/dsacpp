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

Node* insert(Node* root,int key){
    if(root == NULL) return new Node(key);
     if(root->data > key){
        root->left =  insert(root->left,key);
    }
    else if(root->data <= key){
       root->right= insert(root->right,key);
    }
    return root;
}
Node* minValueNode(Node* root);
Node *deleteNode( Node *root, int key) {
  // Return if the tree is empty
  if (root == NULL) return root;

  // Find the node to be deleted
  if (key < root->data)
    root->left = deleteNode(root->left, key);
  else if (key > root->data)
    root->right = deleteNode(root->right, key);
  else {
    // If the node is with only one child or no child
    if (root->left == NULL) {
      
      Node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
     Node *temp = root->left;
      free(root);
      return temp;
    }

    // If the node has two children
     Node *temp = minValueNode(root->right);

    // Place the inorder successor in position of the node to be deleted
    root->data = temp->data;

    // Delete the inorder successor
    root->right = deleteNode(root->right, temp->data);
  }
  return root;
}
Node* minValueNode(Node* root){
    Node* curr = root->right;
    while(curr != NULL){
        curr = curr->left;
    }
    return curr;
}
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

     Node* root = NULL;
     root= insert(root,3);
     insert(root,4);
     insert(root,1);
     insert(root,8);
     insert(root,33);
     insert(root,89);
     insert(root,23);

    // int n,i,a;
    // cout<<"enter size of tree : ";
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cout<<"enter elements : ";
    //     cin>>a;
    //     root = insert(root,a);
    // }
 

   cout<<"preorder : ";
   preorder(root);
   cout<<"inorder : ";
   inorder(root);
   cout<<"postorder :";
   postorder(root);
   
   cout<<endl;
cout<<"after deletion: "<<endl;
   root = deleteNode(root,89);

   cout<<"preorder : ";
   preorder(root);
   cout<<"inorder : ";
   inorder(root);
   cout<<"postorder :";
   postorder(root);
}