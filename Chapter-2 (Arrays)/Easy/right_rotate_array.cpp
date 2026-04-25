#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
void rightRotate1(vector<int> &nums, int k) {
    vector<int> t;
    int n = nums.size();
    for(int i = n - k; i < n; i++) t.emplace_back(nums[i]);
    for(int i = n - 1; i > k - 1; i--) nums[i] = nums[i - k];
    for(int i = 0; i < k; i++) nums[i] = t[i];
}
// time complexity is O(n)

// Optimal Solution:
void rightRotate2(vector<int> &nums, int k) {
    vector<int> t;
    k = k % nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}
// time complexity is O(n)

int main() {
    vector<int> v = {12, 23, 34, 45, 56, 67, 78};
    rightRotate1(v, 3);
    for(auto it : v) cout << it << " ";
    cout << endl;
    rightRotate2(v, 4);
    for(auto it : v) cout << it << " ";
    return 0;
}