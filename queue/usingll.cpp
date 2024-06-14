#include<iostream>
using namespace std;

// Define Node structure
struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node *front, *rear;
public:
    // Constructor
    Queue() {
        front = rear = NULL;
    }

    // Function to add an item to the queue
    void enqueue(int data) {
        Node* newNode = new Node();
        if (!newNode) {
            cout << "\nQueue is full\n";
            return;
        }
        newNode->data = data;
        newNode->next = NULL;
        if (rear == NULL) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Function to remove an item from front of the queue
    void dequeue() {
        if (front == NULL) {
            cout << "\nQueue is empty\n";
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front == NULL) {
            rear = NULL;
        }
        delete temp;
    }

    // Function to display the queue
    void display() {
        if (front == NULL) {
            cout << "\nQueue is empty\n";
            return;
        }
        Node* temp = front;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Driver code
int main(void) {
    // Create a queue
    Queue q;

    // print Queue elements
    q.display();

    // inserting elements in the queue
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    // print Queue elements
    q.display();

    // delete elements from Queue
    q.dequeue();
    q.dequeue();

    cout << "\n\nafter two node deletion\n";

    // print Queue elements
    q.display();

    return 0;
}
