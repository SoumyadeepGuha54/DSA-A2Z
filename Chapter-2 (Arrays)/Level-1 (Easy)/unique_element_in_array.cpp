#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
int unique1(vector<int> nums) {
    for(auto num : nums) {
        int temp = num, cnt = 0;
        for(auto num : nums) if(num == temp) cnt++;
        if(cnt == 1) return num;
    }
}
// TC: O(n^2), SC: O(1)

// Better Solution:
int unique2(vector<int> nums) {
    unordered_map<int, int> mp;
    for(int i = 0; i < nums.size(); i++) mp[nums[i]]++;
    for(int i = 0; i < nums.size(); i++) if(mp[nums[i]] == 1) return nums[i];
    return -1;
}
// TC: O(n) + O(n / 2 + 1)
// SC: O(n / 2 + 1)

// Optimal Solution:
int unique3(vector<int> nums) {
    for(auto num : nums) {
        int res = 0;
        for(int it : nums) res ^= it;
        return res;
    }
}
// TC: O(n), SC: O(1)

int main() {
    vector<int> v = {1, 1, 2, 3, 4, 3, 4};
    cout << unique1(v) << endl;
    cout << unique2(v) << endl;
    cout << unique3(v) << endl;
    return 0;
}