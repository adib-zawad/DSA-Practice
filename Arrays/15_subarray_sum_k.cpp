// Problem: Subarray Sum Equals K
// Pattern: Prefix Sum + HashMap
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include <unordered_map>
using namespace std;

int subarraySum(int arr[], int n, int k) {
    unordered_map<int, int> prefixMap;

    int sum = 0;
    int count = 0;

    // Important: handle case when subarray starts from index 0
    prefixMap[0] = 1;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        // Check if (sum - k) exists
        if (prefixMap.find(sum - k) != prefixMap.end()) {
            count += prefixMap[sum - k];
        }

        // Store current sum
        prefixMap[sum]++;
    }

    return count;
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    cout << "Number of subarrays: " << subarraySum(arr, n, k);
}
