#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
int maxSum1(vector<int> nums) {
    int mx = INT_MIN;
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i; j < nums.size(); j++) {
            int sum = 0;
            for(int k = i; k <= j; k++) sum += nums[k];
            mx = max(mx, sum);
        }
    }
    return mx;
}
// TC: O(n^3), SC: O(1)

// Better Solution:
int maxSum2(vector<int> nums) {
    int mx = INT_MIN;
    for(int i = 0; i < nums.size(); i++) {
        int sum = 0;
        for(int j = i; j < nums.size(); j++) sum += nums[j], mx = max(mx, sum);
    }
    return mx;
}
// TC: O(n^2), SC: O(1)

// Optimal Solution (Kadane's Algorithm):
int maxSum3(vector<int> nums) {
    int mx = INT_MIN, sum = 0;
    for(int i = 0; i < nums.size(); i++) {
        sum += nums[i], mx = max(mx, sum);
        if(sum < 0) sum = 0;
    }
    return mx;
}
// TC: O(n), SC: O(1)

// Optimal Solution (if array has to be returned):
vector<int> maxSumIndices(vector<int> nums) {
    int mx = INT_MIN, sum = 0, start = 0, mxStart = -1, mxEnd = -1;
    for(int i = 0; i < nums.size(); i++) {
        if(sum == 0) start = i;
        sum += nums[i];
        if(sum > mx) mx = sum, mxStart = start, mxEnd = i;
        if(sum < 0) sum = 0;
    }
    return {mxStart, mxEnd};
}
// TC: O(n), SC: O(1)

int main()
{
    vector<int> v = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout << maxSum1(v) << endl;
    cout << maxSum2(v) << endl;
    cout << maxSum3(v) << endl;
    vector<int> result = maxSumIndices(v);
    for(auto it : result) cout << it << " ";
    return 0;
}