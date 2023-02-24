#include<iostream>
using namespace std;

// Node class decralation .
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

//deleting a specific Node
Node* deleteThirdNode(Node* head) {
    if (head == NULL || head->next == NULL || head->next->next == NULL) {
        return head;
    }
    Node* second = head->next;
    Node* third = head->next->next;
    second->next = third->next;
    delete third;
    return head;
}

Node *reverseList(Node *head) {
    Node *prev = NULL;
    Node *current = head;
    Node *ahead = NULL;
    while (current != NULL) {
        head = current->next;
        current->next = prev;
        prev = current;
        current = ahead;
    }
    
    return head;
    
}


//displaying Nodes
void displayList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;  
    }
    cout << endl;
}


//main function
int main() {
	
	//creating Nodes from Node class .
    Node* n1 = new Node(5);
    Node* n2 = new Node(6);
    Node* n3 = new Node(1);
    Node* n4 = new Node(10);
    Node* n5 = new Node(15);

	//linking Nodes .
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

//	//before deleting .
//    cout << "Before performing an action on node: ";
//    displayList(n1);

//	//deleting thrid Node
//    n1 = deleteThirdNode(n1);
//
//	//after deleting
//    cout << "After deleting third node: ";
//    displayList(n1);

//	// reversing a LinkedList .
//	n1 = reverseList(n1);
//	
//	//displaying list after reversing 
//	displayList(n1);
	
	cout << 9;


    return 0;
}