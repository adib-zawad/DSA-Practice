// Problem: Check if array is sorted

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = 4;

    bool isSorted = true;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = false;
            break;
        }
    }

    if (isSorted)
        cout << "Sorted" << endl;
    else
        cout << "Not Sorted" << endl;
}
