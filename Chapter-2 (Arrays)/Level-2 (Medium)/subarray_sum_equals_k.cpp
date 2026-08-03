#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
int sumK1(vector<int> nums, int k) {
    int cnt = 0;
    for(int i = 0; i < nums.size(); i++) {
        int sum = 0;
        for(int j = i; j < nums.size(); j++) {
            sum += nums[j];
            if(sum == k) cnt++;
        }
    }
    return cnt;
}
// TC: O(n^2), SC: O(1)

// Optimal Solution:
int sumK2(vector<int> nums, int k) {
    int sum = 0, cnt = 0;
    unordered_map<int, int> mp;
    mp[0] = 1;
    for(auto num : nums) {
        sum += num;
        if(mp.find(sum - k) != mp.end()) cnt += mp[sum - k];
        mp[sum]++;
    }
    return cnt;
}
// TC: O(n), SC: O(1)

int main() {
    vector<int> v = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    cout << sumK1(v, 3) << endl;
    cout << sumK2(v, 3) << endl;
    return 0;
}