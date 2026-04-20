// Problem: Two Sum
// Pattern: Hashing
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 7, 11, 15};
    int n = 4, target = 9;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << i << " " << j << endl;
            }
        }
    }
}
