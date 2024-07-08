#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int d,Node* n){
        data= d;
        next =n;
    }
    Node(int d){
        data =d;
        next=nullptr;
    }
};
Node* arrtoll(vector<int> & arr){
    Node* root = new Node(arr[0]);
    Node* mover = root;

    for(int i=1;i<=arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next =temp;
        mover=temp;
    }
    return root;
}
Node* insertatend(Node* head,int value){
    Node* temp =head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    Node* newNode= new Node(value);
    temp->next= newNode;
    newNode->next = nullptr;
    return head;
}
int main(){
    vector<int> arr={3,4,1,5,7};
    Node* root= arrtoll(arr);
    Node* root1 = insertatend(root,100);
    Node* temp = root;
    while(temp ){
        cout<<temp->data<<" ";
          temp=temp->next;
    }
  

}

//1.C++ program to split the circular linked list into two halves
//4.inserting at middle of cll

// void splitList (struct Node **head1, struct Node **head2) //function to split list into two halves
// {
// struct Node *slow = head;
// struct Node *fast = head;

// if (head == NULL)
// return;

// while (fast->next != head && fast->next->next != head) //finding middle of the list
// {
// fast = fast->next->next;
// slow = slow->next;
// }

// if (fast->next->next == head)
// fast = fast->next;

// *head1 = head;

// if (head->next != head)
// *head2 = slow->next;


// fast->next = slow->next;


// slow->next = head;
// }
//syllabus for assignment on monday is 
//arrays,strings,recursion,ll,dll,cll,stack ,queue