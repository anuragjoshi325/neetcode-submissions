#include <vector>
using namespace std;

class MyCircularQueue {
private:
    vector<int> queue;
    int capacity; // Maximum capacity of the queue

public:

    // Constructor to set the queue capacity
    MyCircularQueue(int k) {
        capacity = k;
    }

    // Add an element at the rear of the queue
    bool enQueue(int value) {

        // Check if the queue is full
        if (queue.size() == capacity) {
            return false;
        }

        // Add the value to the queue
        queue.push_back(value);

        return true;
    }

    // Remove an element from the front of the queue
    bool deQueue() {

        // Check if the queue is empty
        if (queue.empty()) {
            return false;
        }

        // Remove the first element
        queue.erase(queue.begin());

        return true;
    }

    // Return the front element
    int Front() {

        // If queue is empty
        if (queue.empty()) {
            return -1;
        }

        return queue.front();
    }

    // Return the rear element
    int Rear() {

        // If queue is empty
        if (queue.empty()) {
            return -1;
        }

        return queue.back();
    }

    // Check if the queue is empty
    bool isEmpty() {
        return queue.empty();
    }

    // Check if the queue is full
    bool isFull() {
        return queue.size() == capacity;
    }
};