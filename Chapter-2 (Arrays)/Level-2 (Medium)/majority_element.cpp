#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
int majorityElement1(vector<int> nums) {
    int n = nums.size();
    for(int i = 0; i < n; i++) {
        int cnt = 0;
        for(int j = 0; j < n; j++) if(nums[i] == nums[j]) cnt++;
        if(cnt > n / 2) return nums[i];
    }
    return -1;
}
// TC: O(n^2), SC: O(1)

// Better Solution:
int majorityElement2(vector<int> nums) {
    int n = nums.size();
    unordered_map<int, int> mp;
    for(auto num : nums) mp[num]++;
    for(auto it : mp) if(it.second > n / 2) return it.first;
    return -1;
}
// TC: O(n), SC: O(n)

// Optimal Solution (Moore's Voting Algorithm):
int majorityElement3(vector<int> nums) {
    int cnt = 0, temp = 0, n = nums.size(), element;
    for(auto num : nums) {
        if(cnt == 0) cnt = 1, element = num;
        else if(num == element) cnt++;
        else cnt--;
    }
    for(auto num : nums) if(num == element) temp++;
    if(temp > n / 2) return element;
    return -1;
}
// TC: O(n), SC: O(1)

int main() {
    vector<int> v = {2, 2, 1, 1, 2, 1, 2, 2, 1};
    cout << majorityElement1(v) << " " << majorityElement2(v) << " " << majorityElement3(v);
    return 0;
}