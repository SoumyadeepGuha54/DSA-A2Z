#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
int longestConsecutive1(vector<int> nums) {
    int mx = 0;
    for(int i = 0; i < nums.size(); i++) {
        int cnt = 0, temp = nums[i];
        while(find(nums.begin(), nums.end(), temp) != nums.end()) {
            temp++, cnt++;
        }
        mx = max(mx, cnt);
    }
    return mx;
}
// TC: O(n^2), SC: O(1)

// Better Solution:
int longestConsecutive2(vector<int> nums) {
    sort(nums.begin(), nums.end());
    int cnt = 0, prev = INT_MIN, mx = 0;
    for(auto num : nums) {
        if(num - 1 == prev) cnt++;
        else if(num != prev) cnt = 1;
        mx = max(mx, cnt);
        prev = max(prev, num);
    }
    return mx;
}
// TC: O(nlogn + n), SC: O(1)

// Optimal Solution:
int longestConsecutive3(vector<int> nums) {
    unordered_set<int> st(nums.begin(), nums.end());
    int cnt = 0, mx = 0;
    for(auto it : st) {
        if(st.find(it - 1) == st.end()) {
            int temp = it;
            cnt = 0;
            while(st.find(temp) != st.end()) temp++, cnt++;
        }
        mx = max(mx, cnt);
    }
    return mx;
}
// TC: O(1 + n), SC: O(1)

int main() {
    vector<int> v = {2, 3, 101, 1, 100, 102, 4, 50, 25};
    cout << longestConsecutive1(v);
    cout << endl;
    cout << longestConsecutive2(v);
    cout << endl;
    cout << longestConsecutive3(v);
    return 0;
}