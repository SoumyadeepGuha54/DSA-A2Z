#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
vector<vector<int>> overlap1(vector<vector<int>> intervals) {
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> res;
    for(int i = 0; i < intervals.size(); i++) {
        int start = intervals[i][0], end = intervals[i][1];
        if(!res.empty() && res.back()[1] >= end) continue;
        for(int j = i + 1; j < intervals.size(); j++) {
            if(intervals[j][0] <= end) end = max(end, intervals[j][1]);
            else break;
        }
        res.push_back({start, end});
    }
    return res;
}
// TC: O(nlogn), SC: O(k)

// Optimal Solution:
vector<vector<int>> overlap2(vector<vector<int>> intervals) {
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> res;
    for(auto &interval : intervals) {
        if(res.empty() || res.back()[1] < interval[0]) res.push_back(interval);
        else res.back()[1] = max(res.back()[1], interval[1]);
    }
    return res;
}
// TC: O(n), SC: O(k)

int main() {
    vector<vector<int>> v = {{1, 3}, {8, 10}, {2, 4}, {9, 11}, {16, 17}, {15, 18}, {2, 6}};
    vector<vector<int>> result1 = overlap1(v);
    for(auto it : result1) cout << "[" << it[0] << "," << it[1] << "] ";
    cout << endl;
    vector<vector<int>> result2 = overlap2(v);
    for(auto it : result2) cout << "[" << it[0] << "," << it[1] << "] ";
    return 0;
}