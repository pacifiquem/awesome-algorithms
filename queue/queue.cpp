#include <iostream>
using namespace std;

int queue[100], n = 100, front = -1, rear = -1;

void enque() {
    int val;
    if (rear == n - 1) {
        cout << "Queue is full." << endl;
    } else {
        if (front == -1) {
            front = 0;
        }
        cout << "Inserting element in a queue: ";
        cin >> val;
        rear++;
        queue[rear] = val;
    }
}

void deque() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Element deleted from the queue is: " << queue[front] << endl;
        front++;
    }
}

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Elements in the queue are: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

void readFront() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Element at front is: " << queue[front] << endl;
    }
}

int main() {
    int choice;
    while (true) {
        cout << "1. Insert element" << endl;
        cout << "2. Delete element" << endl;
        cout << "3. Display elements" << endl;
        cout << "4. Display element at front" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                enque();
                break;
            case 2:
                deque();
                break;
            case 3:
                display();
                break;
            case 4:
                readFront();
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
