// Problem: Detect cycle in a linked list
// Approach: Floyd’s Cycle Detection (slow & fast pointer)
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

bool hasCycle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true; // cycle detected
        }
    }

    return false; // no cycle
}

int main() {
    // Creating linked list: 10 -> 20 -> 30 -> 40
    Node* head = new Node{10, NULL};
    head->next = new Node{20, NULL};
    head->next->next = new Node{30, NULL};
    head->next->next->next = new Node{40, NULL};

    // Create a cycle (optional test)
    head->next->next->next->next = head->next; // cycle here

    if (hasCycle(head)) {
        cout << "Cycle detected" << endl;
    } else {
        cout << "No cycle" << endl;
    }

    return 0;
}
