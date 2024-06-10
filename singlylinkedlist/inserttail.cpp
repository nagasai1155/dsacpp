#include <iostream>
#include <bits/stdc++.h>
using namespace std;


struct Node{
    public:
    int data;
    Node* next;
     Node(int data1,Node* next1){
        data = data1;
        next = next1;
     }
};
Node* convertarrtoll (vector<int> & arr){
    Node* head = new Node(arr[0],nullptr);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node*temp = new Node(arr[i],nullptr);
        mover->next = temp;
        mover=temp;
        

    }
    return head;

}
Node* inserttail(Node* head,int value){
    if(head == nullptr) return new Node(value,nullptr);
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    Node * newnode = new Node(value,nullptr);
    temp->next = newnode;
    newnode->next = nullptr;
    return head;

}
int main(){
    vector<int> arr = {1,2,3,4};
    

    //now traversal of ll

    Node* head= convertarrtoll(arr);
    Node * head1 = inserttail(head,100);
    Node* temp = head1;
    
    while(temp != nullptr){
        cout<<temp->data<<" "<<endl;
        temp = temp->next;
    }

    return 0;
}