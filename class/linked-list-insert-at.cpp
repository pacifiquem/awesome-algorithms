#include <bits/stdc++.h>

using namespace std;


class Node {
	public:
		int data;
		Node *next;
		
	Node(int data) {
		this->data = data;
		this->next = NULL;
	}
};

Node *head = NULL;

Node* insertAtPos(Node *head, int position, int data) {
	
	if(position < 0) {
		return head;
	}
	
	if(position == 0) {
		Node *n = new Node(data);

		n->next = head;
		head->next = NULL;
		
		return n;
	}
	
	
	Node *temp = head;
	int i=1;
	
	while(i<=position-1 && head!=NULL){
		head = head->next;
		i++;
	}
	
	if(head) {
		
		Node *n = new Node(data);
		
		n->next = head->next;
		head->next = n;
		
		return temp;
		
	}
	
	return temp;
	
}


void display(Node *n) {
	while(n->next != NULL) {
		cout << n->data << "\t";
		n = n->next;
	}
}



int main() {
	
	Node* root = NULL;
    Node* second = NULL;
    Node* third = NULL;
    
    root = new Node(1);
    second = new Node(2);
    third = new Node(3);
    
    root->next=second;
    second->next=third;
    
    head = root;
	head = insertAtPos(head,1,250);
	
    display(head);

	return 0;
}