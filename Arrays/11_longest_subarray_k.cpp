// Problem: Longest subarray with sum <= K
// Pattern: Sliding Window

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 1, 0, 1, 1, 0};
    int n = 7, k = 4;

    int left = 0, sum = 0, maxLen = 0;

    for (int right = 0; right < n; right++) {
        sum += arr[right];

        while (sum > k) {
            sum -= arr[left];
            left++;
        }

        maxLen = max(maxLen, right - left + 1);
    }

    cout << "Max Length: " << maxLen << endl;
}
