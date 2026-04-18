// Problem: Count number of nodes in a linked list
// Approach: Traverse the list and increment counter/
// Language: C++

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to count nodes
int countNodes(Node* head) {
    int count = 0;
    Node* current = head;

    while (current != NULL) {
        count++;
        current = current->next;
    }

    return count;
}

int main() {
    // Creating linked list: 10 -> 20 -> 30 -> 40
    Node* head = new Node{10, NULL};
    head->next = new Node{20, NULL};
    head->next->next = new Node{30, NULL};
    head->next->next->next = new Node{40, NULL};

    cout << "Number of nodes: " << countNodes(head) << endl;

    return 0;
}
