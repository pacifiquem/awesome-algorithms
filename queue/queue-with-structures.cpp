#include <iostream>
using namespace std;

struct Queue {
    int front, rear;
    int arr[100];

    Queue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return (rear == 99);
    }

    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full." << endl;
        } else {
            if (front == -1) {
                front = 0;
            }
            rear++;
            arr[rear] = value;
            cout << "Element inserted in queue: " << value << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
        } else {
            int value = arr[front];
            front++;
            cout << "Element deleted from queue: " << value << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Elements in the queue are: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    void frontElement() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Element at front of queue is: " << arr[front] << endl;
        }
    }
};

int main() {
    Queue q;
    int choice, value;
    while (true) {
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Front element" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 4:
                q.frontElement();
                break;
            case 5:
                cout << "Thank you for using the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}
