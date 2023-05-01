#include <bits/stdc++.h>
#define QUEUE_SIZE 10

using namespace std;

int queue[QUEUE_SIZE] = {};
int rear = -1, front = -1;

bool isEmpty() {
    return front == -1;
}

int peek() {
    if(isEmpty()) {
        cout << "Queue is empty" <<endl;
        return -1;
    }
    
    return queue[front];
}

bool isFull() {
    return rear >= QUEUE_SIZE-1;
}

void enqueue(int data) {
    if(isFull()) {
        cout << "Queue Overflow" <<endl;
        return;
    }
    
    rear += 1;
    queue[rear] = data;
    
    if(front == -1) front = 0;
}

void dequeue() {
    if(isEmpty()) {
        cout << "Queue Underflow" <<endl;
        return;
    }
    
    front += 1;
    
    if(front > rear) {
        front = rear = -1;
    }
}

int size() {
    if(isEmpty()) {
        return 0;
    }
    
    return rear - front + 1;
}

void display() {
    if(isEmpty()) {
        cout << "Queue is empty" << endl;
        return;
    }
    
    for(int i=front; i<=rear; i++) {
        cout << queue[i] << " ";
    }
    cout << endl;
}

int main() {
    // testing the queue implementation
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    display(); // output: 1 2 3 4
    dequeue();
    dequeue();
    display(); // output: 3 4
    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(8);
    enqueue(9);
    enqueue(10);
    display(); // output: 3 4 5 6 7 8 9 10
    enqueue(11); // output: Queue Overflow
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display(); // output: Queue is empty
    dequeue(); // output: Queue Underflow
    return 0;
}

