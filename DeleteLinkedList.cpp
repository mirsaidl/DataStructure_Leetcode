// ABDURASULOV MIRSAID 12225253 
// C++
// Deletion

#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

void printLinkedList(Node* head) {
	Node* temp = head;
	while (temp != NULL) {
		cout << temp->data << " -> ";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

Node* deleteHead(Node* head) {
    if (head == NULL) {
        return NULL;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}


Node* deleteAny(Node* head, int key) {
    Node* temp = head;
    Node* prev = NULL;
    
    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->data == key) {
        head = temp->next; // Changed head
        delete temp; // free old head
        return head;
    }

    // Search for the key to be deleted, keep track of the previous node
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in linked list
    if (temp == NULL) {
        return head;
    }

    // Unlink the node from linked list
    prev->next = temp->next;
    delete temp; // Free memory
    return head;
}


Node* deleteEnd(Node* head) {
    // If linked list is empty
    if (head == NULL) {
        return NULL;
    }

    // If only one node is present
    if (head->next == NULL) {
        delete head;
        return NULL;
    }

    Node* temp = head;
    Node* prev = NULL;

    // Traverse to the last node
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    // Unlink the last node from second last
    prev->next = NULL;
    delete temp;
    return head;
}


int main()
{
	Node* head = NULL;
	Node* one = NULL;
	Node* two = NULL;
	Node* three = NULL;
	Node* four = NULL;

	head = new Node();
	one = new Node();
	two = new Node();
	three = new Node();
	four = new Node();
	
	head->data = 70;
	one->data = 10;
	two->data = 80;
	three->data = 50;
	four->data = 40;

	head->next = one;
	one->next = two;
	two->next = three;
	three->next = four;
	four->next = NULL;

	cout << "Linked List before deletion:" << endl;
    printLinkedList(head);

    cout << "Linked List after deletion from beginning:" << endl;
    head = deleteHead(head);
    printLinkedList(head);

    cout << "Linked List after deletion from middle:" << endl;
    head = deleteAny(head, 80); // Deleting node with data 80
    printLinkedList(head);

    cout << "Linked List after deletion from end:" << endl;
    head = deleteEnd(head);
    printLinkedList(head);

	return 0;
}
