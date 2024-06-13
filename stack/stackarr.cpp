#include<iostream>
using namespace std;
class Stack{
    public:
    int* arr;
    int size;
    int top ;

    public:
    Stack(int capacity){
        arr = new int[capacity];
        size = capacity;
        top = -1;
    }
    void push(int num){
       
        
            top++;
            arr[top] = num;
    
    }
    void  pop(){
        if(top == -1) cout<<"stack is empty"<<endl;
        else {
            int x= arr[top];
            top--;
            cout<<"deleted :"<<x<<endl;
           
        }
    }
    void traversal(){
        for(int i = top ;i>=0;i--){
            cout<<arr[i]<<" "<<endl;
        }
    }
};
int main(){

       Stack st(4);
       st.push(2);
       st.push(3);
       st.push(5);
       st.push(6);
       st.traversal();
       st.pop(); 
       cout<<endl;
       st.traversal();

}