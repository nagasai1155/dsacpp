#include<iostream>
#include<bits/stdc++.h>
using namespace std;


struct Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1,Node* next1,Node* back1){
        data =data1;
        next = next1;
        back = back1;
    }
    Node(int data1){
        data = data1;
        next=back=NULL;
    }
};
Node* arrtodll(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        temp->back = mover;
        mover = temp;
        
    
        temp = temp->next;
    }
    return head;
}
int  searchaneleindll(Node* head,int value){

       Node* temp = head;
       while(temp != NULL){
        if(temp->data == value) return 1;
       
       }
       temp = temp->next;
return 0;
}

Node* deletebeginning(Node* head){
    if(head == NULL) return NULL;
    Node* temp = head;
    head = head->next;
    
    head->back = nullptr;
    temp->next = nullptr;
   free(temp);
    return head;
}

Node* deleteatend(Node* head){
    if(head== NULL) return NULL;
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    Node* prev = temp->back;
    prev->next = nullptr;
    temp->back= nullptr;
    free(temp);
    return head;
}
int main(){
    vector<int> arr = {3,5,2,7,8};
    Node* head1 = arrtodll(arr);
    // int val = searchaneleindll(head,3);
    // cout<<val<<endl;
    Node* head = deleteatend(head1);
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

    }

    return 0;
}