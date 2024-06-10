#include<iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;
    Node(int data1,Node* next1){
        data = data1;
        next= next1;
    }
};
Node* arrtoll(vector<int> &arr){
 Node* head = new Node(arr[0],nullptr);
 Node* mover = head;
 for(int i=1;i<arr.size();i++){
    Node * temp = new Node(arr[i],nullptr);
    mover->next= temp;
    mover = temp;
 }
 return head;

}

//int lengthll (Node* head){
//     int cnt =0;
//     Node* temp = head;
//     while(temp){
//         temp = temp->next;
//         cnt = cnt +1;
//     }
//     return cnt;
// }
//search an element in linked list

int searchll(Node* head,int value){
    Node* temp = head;
    while(temp != nullptr){
        if(temp->data == value){
            return 10;
        }
        temp = temp->next;
    }
    return 0;
}
//taile nodè deletion 

Node* deletetail(Node* head){

    if(head == nullptr){
        return head;
    }
    Node* temp = head;
    while(temp ->next ->next != nullptr){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;

    return head;
}

Node* deletehead(Node* head){
     if(head == nullptr) return head;
     Node * temp = head;
     head = head->next;
     free(temp);
     return head;
}

Node* deletionposition(Node* head ,int key){
  if(head == nullptr) return head;
  if(key==1){
    Node * temp = head;
    head= head->next;
    free(temp);
    return head;
  }

  int cnt =0;Node* prev = nullptr;Node*temp = head;
  while(temp !=nullptr){
    cnt++;
    if(cnt == key){
       prev->next = prev->next->next;
       free(temp);
       break;
    }
    prev = temp;
    temp = temp->next;
  }
  return head;
}

Node* inserthead(Node* head,int value){
    if(head == nullptr){
        return new Node(value,nullptr);
    }
   Node* newnode = new Node(value,head);
   return newnode;


}
Node*  insertattail(Node* head,int value){
    if(head == nullptr){
        return new Node(value,nullptr);
    }
    Node * temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    Node* newNode = new Node(value,nullptr);
    temp->next = newNode;
    newNode->next = nullptr;
    return head;
}
int main(){
    //convert array to linked list
    vector<int> arr = {2,3,4,5};
 Node * head = arrtoll(arr);
//  cout<<searchll(head,2)<<endl;
 Node* head1 = insertattail(head,122);
 Node* temp = head1;
 while(temp){
    cout<<temp->data<<" "<<endl;
    temp = temp->next;
 }
 
 
 
}