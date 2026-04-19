// Problem: Reverse a linked list
// Approach: Iterative (3 pointers)
// Language: C++

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to reverse linked list
Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;

    while (current != NULL) {
        next = current->next;   // Step 1
        current->next = prev;   // Step 2
        prev = current;         // Step 3
        current = next;         // Step 4
    }

    return prev; // new head
}

// Function to print list
void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    // Creating list: 10 -> 20 -> 30 -> 40
    Node* head = new Node{10, NULL};
    head->next = new Node{20, NULL};
    head->next->next = new Node{30, NULL};
    head->next->next->next = new Node{40, NULL};

    cout << "Original: ";
    printList(head);

    head = reverseList(head);

    cout << "Reversed: ";
    printList(head);

    return 0;
}
