// Problem: Product of Array Except Self
// Pattern: Prefix + Suffix
// Time Complexity: O(n)
// Space Complexity: O(1) (excluding output array)

#include <iostream>
using namespace std;

void productExceptSelf(int arr[], int n) {
    int result[n];

    // Step 1: Fill with prefix products
    result[0] = 1;
    for (int i = 1; i < n; i++) {
        result[i] = result[i - 1] * arr[i - 1];
    }

    // Step 2: Multiply with suffix products
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        result[i] = result[i] * suffix;
        suffix = suffix * arr[i];
    }

    // Print result
    cout << "Output: ";
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    productExceptSelf(arr, n);
}
