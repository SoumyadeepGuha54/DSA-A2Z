#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
vector<int> removeDuplicates(vector<int> nums) {
    set<int> st;
    for(int i = 0; i < nums.size(); i++) st.insert(nums[i]);
    vector<int> v;
    for(auto it : st) v.emplace_back(it);
    return v;
}

int main() {
    vector<int> v1 = {12, 12, 23, 34, 34, 45, 56, 56};
    vector<int> v2 = removeDuplicates(v1);
    for(auto it : v2) cout << it << " ";
    return 0;
}