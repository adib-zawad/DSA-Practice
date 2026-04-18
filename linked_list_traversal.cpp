#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printLinkedList(Node* head) {
    Node* current = head;
    
    while (current != NULL) {
        cout << current->data << endl;
        current = current->next;
    }
}

int main() {
    Node* head = new Node{16, NULL};
    head->next = new Node{13, NULL};

    printLinkedList(head);
    return 0;
}