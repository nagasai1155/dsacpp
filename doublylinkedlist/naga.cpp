#include<bits/stdc++.h>
#include<iostream>
 
 using namespace std;


struct Node{
    public:
    int data;
    Node*next;
    Node* back;
    public:
    Node(int data1,Node* next1,Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
    public:
      Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }

};
Node* arrtodll(vector<int> & arr){
     
     Node* head = new Node(arr[0]);
     Node* prev = head;
     for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev ->next = temp;
        prev =temp;
     }
     return head;
}
Node* deletehead(Node* head){
    if(head == nullptr){
        return head;
    }
    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next=nullptr;
    free(prev);
    return head;
}
  
Node* deletetail(Node* head){
    if(head == nullptr){
        return head;
    }
    Node* temp = head;
    while(temp->next != nullptr){
          
          temp = temp->next;
    }
   Node* prev = temp->back;
   prev->next = nullptr;
   temp->back=nullptr;
   free(temp);
   return head;
}

Node* deleteposition (Node* head,int key){
    if(head== nullptr){
        return head;
    }
    
    Node* temp = head;
    int cnt =0;
    while(temp !=nullptr){
        cnt++;
        if(cnt == key){
            break;
        }
        temp = temp->next;
    }

    Node* prev = temp->back;
    Node* front = temp->next;
    if(prev == nullptr){
        return deletehead(head);
    }
    else if(front== nullptr){
        return deletetail(head);
    }

    prev->next= front;
    front->back = prev;
    temp->next= nullptr;
    temp->back=nullptr;
    free(temp);
    return head;

}
  
  int main(){
       
 vector<int> arr = {2,3,4,5,6};
 Node* head = arrtodll(arr);
 Node* tra =  deleteposition( head,3);
 
 while(tra != nullptr)
 {
    cout<<tra->data<<" "<<endl;
 
    tra = tra->next;
 }
    return 0;
 }