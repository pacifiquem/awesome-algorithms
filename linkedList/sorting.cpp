#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
}

Node *merge(Node *a, Node *b)
{
    // base case
    if (a == NULL)
        return b;
    if (b == NULL)
        return a;
    // recursive case
    // take a head pointer
    Node *c;
    if (a->data < b->data)
    {
        c = a;
        c->next = merge(a->next, b);
    }
    else
    {
        c = b;
        c->next = merge(a, b->next);
    }
    return c;
}

Node *mid_point(Node *head)
{
    // base case
    if (head == NULL || head->next == NULL)
        return head;
    // recursive case
    Node *fast = head;
    Node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next;
        if (fast->next == NULL)
            break;
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
}

Node *merge_sort(Node *head)
{
    // base case
    if (head == NULL || head->next == NULL)
        return head;
    // recursive case
    // Step 1: divide the linked list into
    // two equal linked lists
    Node *mid = mid_point(head);
    Node *a = head;
    Node *b = mid->next;
    mid->next = NULL;
    // Step 2: recursively sort the smaller
    // linked lists
    a = merge_sort(a);
    b = merge_sort(b);
    // Step 3: merge the sorted linked lists
    Node *c = merge(a, b);
    return c;
}

void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

int main()
{

    Node *head = new Node(12);
    Node *n1 = new Node(2);
    Node *n2 = new Node(1);
    Node *n3 = new Node(125);
    Node *n3 = new Node(14);
    Node *n4 = new Node(18);
    Node *n5 = new Node(32);
    Node *n6 = new Node(19);
    Node *n7 = new Node(02);
    Node *n8 = new Node(43);
    Node *n9 = new Node(90);
    Node *n10 = new Node(45);

    head->next = n1;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = n7;
    n7->next = n8;
    n8->next = n9;
    n9->next = n10;

    cout << "Before Sorting : " << printList(head);

    Node *headOnSorted = merge_sort(head);

    cout << "After Sorting: " << printList(headOnSorted);

    return 0;
}