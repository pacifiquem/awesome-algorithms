#include <bits/stdc++.h>
using namespace std;

class Node {
private:
    int data;
    Node* next;
public:
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
    void display() {
        cout << data << endl;
    }
    friend class Stack;
};

class Stack {
public:
    Node* push(Node* head, int value) {
        Node* new_node = new Node(value);
        new_node->next = head;
        head = new_node;
        return head;
    }
    int pop(Node*& head) {
        if (head == nullptr) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        int value = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        return value;
    }
    int peek(Node* head) {
        if (head == nullptr) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return head->data;
    }
    int size(Node* head) {
        int size = 0;
        Node* temp = head;
        while (temp != nullptr) {
            size++;
            temp = temp->next;
        }
        return size;
    }
    bool isEmpty(Node* head) {
        return head == nullptr;
    }
};

int main() {
    Node* head = nullptr;
    Stack s;
    head = s.push(head, 5);
    head = s.push(head, 10);
    head = s.push(head, 15);
    cout << "Top element: " << s.peek(head) << endl;
    cout << "Stack size: " << s.size(head) << endl;
    while (!s.isEmpty(head)) {
        cout << s.pop(head) << " ";
    }
    return 0;
}

