#include<iostream>
using namespace std;

class Queue {
private:
    int front, rear, capacity;
    int* queue;
public:
    Queue(int c) {
        front = rear = 0;
        capacity = c;
        queue = new int[capacity];
    }


    void queueEnqueue(int data) {
    
        if (capacity-1 == rear) {
            cout << "\nQueue is full\n";
            return;
        }
       
    
            queue[rear] = data;
            rear++;
        
        return;
    }

   
    void queueDequeue() {
        // if queue is empty
        if (front &&  rear == 0) {
            cout << "\nQueue is  empty\n";
            return;
        }
       
        else {
            for (int i = 0; i < rear - 1; i++) {
                queue[i] = queue[i + 1];
            }
          
            rear--;
        }
        return;
    }

    void queueDisplay() {
        
       
        
        for (int i = front; i < rear; i++) {
            cout << queue[i] << " ";
        }
        return;
    }
};

// Driver code
int main(void) {
   
    Queue q(4);


   

    q.queueEnqueue(20);
    q.queueEnqueue(30);
    q.queueEnqueue(40);
    q.queueEnqueue(50);
    

  
    q.queueDisplay();

   

    return 0;
}
