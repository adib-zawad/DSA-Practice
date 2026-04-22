#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> result;

    // Step 1: sort intervals
    sort(intervals.begin(), intervals.end());

    for (auto interval : intervals) {
        // If no overlap
        if (result.empty() || result.back()[1] < interval[0]) {
            result.push_back(interval);
        } 
        // Overlap → merge
        else {
            result.back()[1] = max(result.back()[1], interval[1]);
        }
    }

    return result;
}

int main() {
    vector<vector<int>> intervals = {{1,3}, {2,6}, {8,10}, {15,18}};

    auto res = merge(intervals);

    for (auto &v : res) {
        cout << "[" << v[0] << "," << v[1] << "] ";
    }
}
