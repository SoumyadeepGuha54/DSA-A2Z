#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach 1:
int length1(vector<int> nums, int target) {
    int n = nums.size(), len = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int sum = 0;
            for(int k = i; k <= j; k++) sum += nums[k];
            if(sum == target) len = max(len, j - i + 1);
        }
    }
    return len;
}
// TC: O(n^3), SC: O(1)

// Brute Force Approach 2:
int length2(vector<int> nums, int target) {
    int n = nums.size(), len = 0;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += nums[j];
            if(sum == target) len = max(len, j - i + 1);
        }
    }
    return len;
}
// TC: O(n^2), SC: O(1)

// Optimal Solution:
int length3(vector<int> nums, int target) {
    int n = nums.size(), len = 0, sum = 0;
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++) {
        sum += nums[i];
        if(sum == target) len = max(len, i + 1);
        if(mp.find(sum - target) != mp.end()) len = max(len, i - mp[sum - target]);
        mp[sum] = i;
    }
    return len;
}
// TC: O(n), SC: O(n)

int main() {
    vector<int> v = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    cout << length1(v, 3) << endl;
    cout << length2(v, 3) << endl;
    cout << length3(v, 3) << endl;
    return 0;
}