#include <iostream>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;
   
    
   
};
class   Queue{
     Node* front;
    Node* rear;
    public:
    Queue(){
        front = rear = NULL;
    }
   void enqueue(int data){
    
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if(rear == NULL){
        rear=front=newNode;
    }
    rear->next= newNode;
    rear=newNode;
   }

   void dequeue(){
    if(rear=front=NULL) return ;
    else{
       Node* temp = front;
       front = front->next;
       delete temp;
       return;
    }
   }

  void display(){
    if( rear ==NULL) cout<<"no elements to display"<<endl;
    Node* temp = front;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp  = temp->next;
    }
  }

};
int main(){
   Queue t;
 
   t.display();

    return 0;
}