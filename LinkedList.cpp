// ABDURASULOV MIRSAID 12225253 
// C++
// INSERTING

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

Node* insertHead(Node* head, int value) {
	Node* newnode = new Node();
	newnode->data = value;
	newnode->next = head;
	head = newnode;

	return head;
}

Node* insertAtEnd(Node*& head, int newData) {
	Node* newnode = new Node();
	newnode->data = newData;
	newnode->next = NULL;
	Node* temp = head;
	while (temp->next != NULL) {
			temp = temp->next;
	}
	temp->next = newnode;

	return head;
}

Node* insertAny(Node* head, int newData, int key) {
	Node* newnode = new Node();
	newnode->data = newData;
	newnode->next = NULL;
	Node* temp = head;

	while (temp->next != NULL) {
		if (temp->data == key) {
			newnode->next = temp->next;
			temp->next = newnode;
			return head;
		}
		temp = temp->next;
	}
    
	temp->next = newnode;
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

	cout << "Linked List before insertion at head:" << endl;
	printLinkedList(head);

	cout << "Linked List after insertion at head:" << endl;
	head = insertHead(head, 60);
	printLinkedList(head);

	cout << "Linked List after insertion at last:" << endl;
	head = insertAtEnd(head, 100);
	printLinkedList(head);

	cout << "Linked List after insertion at middle:" << endl;
	head = insertAny(head, 500, 80);
	printLinkedList(head);

	return 0;
}
