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

Node* insertatanyposition(Node* head,int data,int pos){
    int cnt =0;
    Node* temp = head;
    while(temp->next != head){
        cnt++;
        if(cnt == (pos-1)) break;
        temp = temp->next;
    }
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}
Node* deletebeginning(Node* head){
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    head = head->next;
    temp->next = head;
  
    return head;
    
}
Node* deleteend(Node* head){
    Node* temp = head;
    while(temp->next->next != head){
        temp = temp->next;
    }
    temp->next = head;return head;

}
Node* deleteanyposition(Node* head,int pos){

Node* temp = head;
int cnt =0;
Node* prev = NULL;
while(temp->next != head){
    cnt ++;
    if(cnt == pos){
      prev->next = prev->next->next;
      free(temp);
      break;
    }
    prev= temp;
    temp= temp->next;
   
}
return head;

}
int main(){

vector<int> arr = {32,3,4,5,8};
Node* head = arrtocll(arr);
Node* head1 = deleteanyposition(head,3);
Node* temp = head1;
do{
    cout<<temp->data<<" ";
    temp = temp->next;
} while(temp != head1);
}