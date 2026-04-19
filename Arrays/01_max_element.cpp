// Find maximum element in array

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 5, 20, 8};
    int n = 4;

    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    cout << "Max: " << maxVal << endl;
}
