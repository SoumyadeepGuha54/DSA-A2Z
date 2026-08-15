#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
int longestSubarray1(vector<int> nums) {
    int n = nums.size(), cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int sum = 0;
            for(int k = i; k <= j; k++) {
                sum += nums[k];
            }
            if(sum == 0) cnt = max(cnt, j - i + 1);
        }
    }
    return cnt;
}
// TC: O(n^3), SC: O(1)

// Better Solution:
int longestSubarray2(vector<int> nums) {
    int n = nums.size(), cnt = 0;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += nums[j];
            if(sum == 0) cnt = max(cnt, j - i + 1);
        }
    }
    return cnt;
}
// TC: O(n^2), SC: O(1)

// Optimal Solution:
int longestSubarray3(vector<int> nums) {
    unordered_map<int, int> mp;
    int n = nums.size(), cnt = 0, sum = 0;
    for(int i = 0; i < n; i++) {
        sum += nums[i];
        if(sum == 0) cnt = i + 1;
        else {
            if(mp.find(sum) != mp.end()) cnt = max(cnt, i - mp[sum]);
            else mp[sum] = i;
        }
    }
    return cnt;
}
// TC: O(n), SC: O(n)

int main() {
    vector<int> v = {1, -1, 3, 2, -2, -8, 1, 7, 10, 3};
    cout << longestSubarray1(v) << endl;
    cout << longestSubarray2(v) << endl;
    cout << longestSubarray3(v) << endl;
    return 0;
}