#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
int subarrayXOR1(vector<int> nums, int k) {
    int cnt = 0;
    for(int i = 0; i < nums.size(); i++) {
        for(int j = i; j < nums.size(); j++) {
            int res = 0;
            for(int m = i; m <= j; m++) res ^= nums[m];
            if(res == k) cnt++;
        }
    }
    return cnt;
}
// TC: O(n^3), SC: O(1)

// Better Solution:
int subarrayXOR2(vector<int> nums, int k) {
    int cnt = 0;
    for(int i = 0; i < nums.size(); i++) {
        int res = 0;
        for(int j = i; j < nums.size(); j++) {
            res ^= nums[j];
            if(res == k) cnt++;
        }
    }
    return cnt;
}
// TC: O(n^2), SC: O(1)

// Optimal Solution:
int subarrayXOR3(vector<int> nums, int k) {
    int res = 0, cnt = 0;
    unordered_map<int, int> mp;
    mp[0] = 1;
    for(auto num : nums) {
        res ^= num;
        if(mp.find(res ^ k) != mp.end()) cnt += mp[res ^ k];
        mp[res]++;
    }
    return cnt;
}
// TC: O(n), SC: O(n)

int main() {
    vector<int> v = {4, 2, 2, 6, 4};
    cout << subarrayXOR1(v, 6) << endl;
    cout << subarrayXOR2(v, 6) << endl;
    cout << subarrayXOR3(v, 6) << endl;
    return 0;
}