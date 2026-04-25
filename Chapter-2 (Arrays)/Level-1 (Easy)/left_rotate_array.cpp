#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
void leftRotate1(vector<int> &nums, int k) {
    vector<int> t;
    int n = nums.size();
    for(int i = 0; i < k; i++) t.emplace_back(nums[i]);
    for(int i = k; i < n; i++) nums[i - k] = nums[i];
    for(int i = n - k; i < n; i++) nums[i] = t[i - n + k];
}
// time complexity is O(n)

// Optimal Solution:
void leftRotate2(vector<int> &nums, int k) {
    vector<int> t;
    k = k % nums.size();
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
    reverse(nums.begin(), nums.end());
}
// time complexity is O(n)

int main() {
    vector<int> v = {12, 23, 34, 45, 56, 67, 78};
    leftRotate1(v, 3);
    for(auto it : v) cout << it << " ";
    cout << endl;
    leftRotate2(v, 4);
    for(auto it : v) cout << it << " ";
    return 0;
}