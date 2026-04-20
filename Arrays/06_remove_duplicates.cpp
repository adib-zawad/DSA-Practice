// Problem: Remove duplicates from sorted array
// Pattern: Two Pointer
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 1, 2, 2, 3, 3};
    int n = 6;

    int j = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    for (int i = 0; i <= j; i++) {
        cout << arr[i] << " ";
    }
}
