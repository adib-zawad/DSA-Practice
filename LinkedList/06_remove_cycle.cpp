// Problem: Remove cycle in linked list
// Approach: Floyd's Algorithm + pointer reset

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void removeCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    // Detect cycle
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) break;
    }

    // No cycle
    if (slow != fast) return;

    // Find start of cycle
    slow = head;
    while (slow->next != fast->next) {
        slow = slow->next;
        fast = fast->next;
    }

    // Remove cycle
    fast->next = NULL;
}
