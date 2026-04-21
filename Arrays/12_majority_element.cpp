// Problem: Majority Element (> n/2 times)
// Pattern: Boyer-Moore Voting Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

int majorityElement(int arr[], int n) {
    int candidate = -1;
    int count = 0;

    // Step 1: Find candidate
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
        }

        if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verify candidate (optional but good practice)
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2)
        return candidate;

    return -1; // No majority element
}

int main() {
    int arr[] = {2, 2, 1, 1, 2, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = majorityElement(arr, n);

    if (result != -1)
        cout << "Majority Element: " << result;
    else
        cout << "No Majority Element";
}
