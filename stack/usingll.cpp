#include<iostream>
using namespace std;

// Define Node structure
struct Node {
    int data;
    Node* next;
};

class Stack {
    private:
    Node* top;

    public:
    // Constructor
    Stack() {
        top = NULL;
    }

    // Push function
    void push(int num) {
        Node* newNode = new Node();
        if (!newNode) {
            cout << "Heap overflow" << endl;
            return;
        }
        newNode->data = num;
        newNode->next = top;
        top = newNode;
    }

    // Pop function
    int  pop() {
        if (top == NULL) {
            cout << "Stack underflow" << endl;
          
        } else {
            Node* temp = top;
            top = top->next;
            int popped_value = temp->data;
            delete temp;
            return popped_value;
            
        }
    }

    // Peek function
    int peek() {
        if (!isEmpty())
            return top->data;
        else
            return -1;
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == NULL;
    }

    // Traverse function
    void traverse() {
        Node* temp = top;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main() {
    Stack st;
    st.push(5);
    st.push(6);
    st.push(1);
    st.push(2);
    st.push(10);
    st.traverse();  // Calling the traverse function
    cout<<endl;
   cout<<"delete data"<<st.pop();
}
