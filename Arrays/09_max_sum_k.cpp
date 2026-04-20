// Problem: Maximum sum subarray of size K
// Pattern: Sliding Window
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 1, 5, 1, 3, 2};
    int n = 6, k = 3;

    int windowSum = 0;

    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        maxSum = max(maxSum, windowSum);
    }

    cout << "Max Sum: " << maxSum << endl;
}
