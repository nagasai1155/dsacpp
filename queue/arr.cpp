#include<iostream>
using namespace std;

class Queued{

     private:
     int* arr;
     int front,rear,capacity;
     public:
     Queued(int c){
        capacity =c;
        rear=front=0;
        arr = new int[capacity];
     }
 
 void enqueuearr(int data){
    if(rear == capacity-1 ) {
        cout<<"queue is full"<<endl;
     return;   
    }
 else{
    
        arr[rear]= data;
        rear++;
        
        return;
 }
    
 }
 void dequeue(){
    if(front && rear == 0 ) {
        cout<<"queue is empty"<<endl;
        return ;
    }
    else{
       for(int i=0;i<rear-1;i++){
         arr[i] = arr[i+1];

       }
        rear--;
        return;
    }
 }

 void display(){
 
    
        for(int i = front ;i<rear;i++){
            cout<<arr[i]<<" "<<endl;
        }
    return;
 }

};
int main(){
      
      Queued s(5);
      s.enqueuearr(4);
      s.enqueuearr(45);
      s.enqueuearr(224);
   
      s.display();
      s.dequeue();
      cout<<endl;
      s.display();
}