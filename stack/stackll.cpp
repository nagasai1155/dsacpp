#include<iostream>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

};
class Stack{
    Node* top;
    public:
    Stack(){
        top = NULL;
    }
    void push(int num){
        Node* newNode = new Node();
        newNode->data = num;
        newNode->next = top;
        top = newNode;
    }
    void peeek(){
        cout<<"peek"<<top->data<<endl;
    }
void pop(){
    Node* temp = top;
    top = top->next;
    int dele = temp->data;
    delete temp;
    cout<<"deleted:" + dele<<endl;
}
void traversal(){
    Node* temp = top;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
};
int main(){

Stack st;
st.push(58);
st.push(45);
st.push(15);
st.push(25);
st.push(53);
st.traversal();
st.pop();
st.traversal();
st.peeek();
    return 0;
}