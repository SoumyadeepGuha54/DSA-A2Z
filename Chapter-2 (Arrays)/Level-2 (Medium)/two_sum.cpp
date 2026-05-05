#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
vector<int> twoSum1(vector<int> nums, int target) {
    vector<int> res(2, -1);
    for(int i = 0; i < nums.size() - 1; i++) for(int j = i + 1; j < nums.size(); j++) if(nums[i] + nums[j] == target) res[0] = i, res[1] = j;
    return res;
}
// TC: O(n^2), SC: O(1)

// Optimal Solution:
vector<int> twoSum2(vector<int> nums, int target) {
    unordered_map<int, int> mp;
    for(int i = 0; i < nums.size(); i++) {
        int t1 = nums[i], t2 = target - t1;
        if(mp.find(t2) != mp.end()) return {mp[t2], i};
        mp[t1] = i;
    }
    return {-1, -1};
}
// TC: O(n), SC: O(n)

int main() {
    vector<int> v = {2, 7, 11, 15};
    vector<int> result1 = twoSum1(v, 9);
    for(auto it : result1) cout << it << " ";
    cout << endl;
    vector<int> result2 = twoSum1(v, 9);
    for(auto it : result2) cout << it << " ";
    return 0;
}