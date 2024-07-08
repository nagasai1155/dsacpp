#include <iostream>
#include <stack>
//implement queue using 2 stacks in c++;

class QueueUsingStacks {
private:
    std::stack<int> stack1; // For enqueue
    std::stack<int> stack2; // For dequeue

public:
    void enqueue(int value) {
        stack1.push(value);
    }

    int dequeue() {
        if (stack2.empty()) {
            // Transfer elements from stack1 to stack2
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }

        if (stack2.empty()) {
            // Queue is empty
            std::cerr << "Error: Queue is empty!" << std::endl;
            return -1; // Assuming -1 represents an error
        }

        int frontValue = stack2.top();
        stack2.pop();
        return frontValue;
    }

    bool isEmpty() const {
        return stack1.empty() && stack2.empty();
    }
};

int main() {
    QueueUsingStacks myQueue;

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    std::cout << "Dequeued: " << myQueue.dequeue() << std::endl; // Should print 10
    std::cout << "Dequeued: " << myQueue.dequeue() << std::endl; // Should print 20

    myQueue.enqueue(40);

    std::cout << "Dequeued: " << myQueue.dequeue() << std::endl; // Should print 30
    std::cout << "Dequeued: " << myQueue.dequeue() << std::endl; // Should print 40

    std::cout << "Is queue empty? " << (myQueue.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}
