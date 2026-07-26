#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
vector<int> leaders1(vector<int> nums) {
    vector<int> v;
    for(int i = 0; i < nums.size(); i++) {
        bool fl = true;
        for(int j = i + 1; j < nums.size(); j++) {
            if(nums[i] <= nums[j]) {
                fl = false;
                break;
            }
        }
        if(fl == true) v.push_back(nums[i]);
    }
    return v;
}
// TC: O(n^2), SC: O(n) [vector(return)]

// Optimal Solution:
vector<int> leaders2(vector<int> nums) {
    vector<int> v;
    int mx = INT_MIN;
    for(int i = nums.size() - 1; i >= 0; i--) {
        if(nums[i] > mx) v.push_back(nums[i]);
        mx = max(mx, nums[i]);
    }
    return v;
}
// TC: O(n), SC: O(n) [vector(return)]

int main() {
    vector<int> v = {10, 22, 12, 12, 3, 0, 6};
    vector<int> result1 = leaders1(v);
    for(auto it : result1) cout << it << " ";
    cout << endl;
    vector<int> result2 = leaders2(v);
    for(auto it : result2) cout << it << " ";
    return 0;
}