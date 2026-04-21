// Problem: Best Time to Buy and Sell Stock
// Pattern: Greedy
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include <climits>
using namespace std;

int maxProfit(int prices[], int n) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int i = 0; i < n; i++) {
        // Update minimum price
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }

        // Calculate profit
        int profit = prices[i] - minPrice;

        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }

    return maxProfit;
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);

    cout << "Maximum Profit: " << maxProfit(prices, n);
}
