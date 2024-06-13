#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Stack{
    public:
    int* arr;
    int size;
    int top;

    public:
    Stack(int capacity){
        arr= new int[capacity];
        top = -1;
        size= capacity;
    }

   void push(int num){
    if(top == size-1){
        return ;
    }else{
        top++;
        arr[top]=num;
    }
}
int pop(){
    if(top == -1){
        return -1;
    }else {
        int x = arr[top];
        top=top-1;
        return x;
    }
}
void peek(){
    if(top==-1) cout<<"empty";
    else {
        cout<<"top :"<<arr[top];
    }
}
void traversal(){
    if(top == -1 ) {
        cout<<"stack is empty"<<endl;
    }
   else {
    cout<<"stack : ";
    for(int i=top;i>=0;i--){
        cout<<arr[i]<<" ";
    }
   }
   
}


};


int main(){
Stack st (5);
st.push(5);
st.push(6);
st.push(7);
st.push(2);
 st.traversal();
 cout<<endl;
 st.pop();

 st.traversal();
 cout<<endl;
 st.peek();
 cout<<endl;
}

