// Problem: Find middle element of a linked list
// Approach: Slow and Fast pointer
// Language: C++

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to find middle node
int findMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
}

int main() {
    // Creating linked list: 10 -> 20 -> 30 -> 40 -> 50
    Node* head = new Node{10, NULL};
    head->next = new Node{20, NULL};
    head->next->next = new Node{30, NULL};
    head->next->next->next = new Node{40, NULL};
    head->next->next->next->next = new Node{50, NULL};

    cout << "Middle element: " << findMiddle(head) << endl;

    return 0;
}
