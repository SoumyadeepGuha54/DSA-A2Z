#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
int missingNumber1(vector<int> nums) {
    int n = nums.size();
    for(int i = 1; i <= n; i++) {
        int fl = 0;
        for(int j = 0; j < n; j++) if(nums[j] == i) {
            fl = 1;
            break;
        }
        if(fl == 0) return i;
    }
}
// TC: O(n^2), SC: O(1)

// Better Solution 1: (Hashtable)
int missingNumber2(vector<int> nums) {
    int n = nums.size() + 1;
    unordered_map<int, int> mp;
    for(auto it : nums) mp[it]++;
    for(int i = 1; i <= n; i++) if(mp[i] == 0) return i;
}
// TC: O(2n), SC: O(n)

// Better Solution 2: (Bit Manipulation)
int missingNumber3(vector<int> nums) {
    int n = nums.size() + 1, res1 = 0, res2 = 0;
    for(int i = 1; i <= n; i++) res1 ^= i;
    for(auto it : nums) res2 ^= it;
    return res1 ^= res2;
}
// TC: O(2n), SC: O(1)

// Optimal Solution 1:
int missingNumber4(vector<int> nums) {
    int n = nums.size() + 1;
    int sum = (n * (n + 1)) / 2, temp = 0;
    for(auto it : nums) temp += it;
    return sum - temp;
}
// TC: O(n), SC: O(1)

// Optimal Solution 2: (Bit Manipulation)
int missingNumber5(vector<int> nums) {
    int n = nums.size(), res1 = 0, res2 = 0;
    for(int i = 0; i < n; i++) {
        res1 ^= i + 1;
        res2 ^= nums[i];
    }
    res1 ^= n + 1;
    return res1 ^= res2;
}
// TC: O(n), SC: O(1)

int main() {
    vector<int> v = {4, 1, 3, 2};
    cout << missingNumber1(v) << endl;
    cout << missingNumber2(v) << endl;
    cout << missingNumber3(v) << endl;
    cout << missingNumber4(v) << endl;
    cout << missingNumber5(v) << endl;
    return 0;
}