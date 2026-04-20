// Remove duplicates from sorted array

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
