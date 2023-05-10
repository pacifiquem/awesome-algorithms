#include <bits/stdc++.h>

using namespace std;

class Node {
	public: 
		int data;
		Node* next;
		
	Node(int data) {
		this.data = data;
		this->next = NULL
	}
	
	public:
		int size(Node* head) {
			
			if(head == NULL) {
				cout << "Linkedlist is empty" <<endl;
				return -1
			}
			
			int size = 0;
			while(head->next != NULL) {
				size +=1;
				head = head->next;
			}
			
			return size;
		}
		
		void display(Node* head) {
			if(head->next == NULL) {
				cout << "Linkedlist is empty" <<endl;
			}
			
			while(head->next != NULL) {
				cout << head.data;
				head = head->next;
			}
			
		}
		
		// insert at the head of a linkedlist
		Node* insertAtHead(int data, Node* head) {
			Node* newNode = new Node(data);
			newNode->next = head;
			head = newNode;
			
			return head;
		}
		
		//insert at the end of a linkedlist
		Node* insertAtTail(int data, Node*head) {
			Node* newNode = new Node(data);
			while(true) {
				if(head->next == NULL) {
					head->next = newNode;
					break;
				}
				
				head = head->next;
			}
		}
		
		//insert at any position in a linkedlist
		void insertAtPosition(Node** headRef, int position, int data) {
    		Node* newNode = new Node(data);

    		if (*headRef == NULL || position == 0) {

        		newNode->next = *headRef;
        		*headRef = newNode;
        		return;
    		}

    		Node* current = *headRef;
    		for (int i = 0; current != NULL && i < position - 1; i++) {
        		current = current->next;
    		}


    		if (current == NULL) {
        	return;
    		}

    		// link the new node to the next node
    		newNode->next = current->next;

    		// link the previous node to the new node
    		current->next = newNode;
		}
		
		//delete node at head
		Node* deleteAthead(Node* head) {
    		if (head == nullptr) {
        		return nullptr;
    		}
    		Node* newHead = head->next;
    		delete head; 
    		return newHead; // return new head to calling function
		}
		

		//delete at tail
		Node* deleteAtTail(Node* head) {
			
    		if (head == nullptr) {
        		cout << "Linked list is empty." << endl;
        		return nullptr;
    		}
    		
    		if (head->next == nullptr) {
        		// list has only one node, delete it and return nullptr
        		delete head;
        		return nullptr;
    		}
    		
    		Node* cur = head;
    		while (cur->next->next != nullptr) {
        		cur = cur->next;
    		}
    		
    		delete cur->next;
    		cur->next = nullptr;
    		
    		return head;
		}	
		
		//delete at any position of a linkedlist
		Node* deleteAtPosition(int position, Node* head) {
    		Node* current = head;
    		Node* prev = nullptr;
    		int i = 0;

    		// Traverse the list to the node before the one to be deleted
    		while (current != nullptr && i < position-1) {
        		prev = current;
        		current = current->next;
        		i++;
    		}

    		// Check if position is valid
    		if (current == nullptr || current->next == nullptr) {
        		cout << "Invalid position" << endl;
        		return head;
    		}

    		// Delete the node at the specified position
    		Node* temp = current->next;
    		current->next = temp->next;
    		delete temp;

    		// Update the head pointer if necessary
    		if (position == 1) {
        		head = current->next;
    		}

    		return head;
		}
		
};

int main() {
	
	
	
	return 0;
}
