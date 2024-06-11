#include <bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next=nullptr;
    }
};
Node* arrtocll(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
        temp = temp->next;
    
    
    }
    mover->next = head;
   
    return head;

}
Node* inserthead(Node* head,int data){
     Node* last = head;
     Node* newNode = new Node(data);
   
     
      while(last->next != head){
         last = last->next;
      }
      newNode->next = head;
      head = newNode;
      last->next = head;
      return head;
}
Node* insertatend(Node* head,int data){
    Node* last = head;
    Node* newNode = new Node(data);
    newNode->next = head;
    while(last->next != head){
        last = last->next;
    }

    last->next = newNode;
    
    return head;
}
int main(){

vector<int> arr = {32,3,4,5,8};
Node* head = arrtocll(arr);
Node* head1 = insertatend(head,1000);
Node* temp = head1;
do{
    cout<<temp->data<<" ";
    temp = temp->next;
} while(temp != head1);
}