#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
int removeDuplicates1(vector<int> nums) {
    set<int> st;
    for(int i = 0; i < nums.size(); i++) st.insert(nums[i]);
    return st.size();
}
// time complexity is O(nlogn)

// Optimal Solution:
int removeDuplicates2(vector<int> nums) {
    int i = 0;
    for(int j = 1; j < nums.size(); j++) if(nums[i] != nums[j]) {
        nums[i + 1] = nums[j];
        i++;
    }
    return i + 1;
}
// time complexity is O(n)

int main() {
    vector<int> v = {12, 12, 23, 34, 34, 45, 56, 56};
    cout << removeDuplicates1(v) << endl;
    cout << removeDuplicates2(v) << endl;
    return 0;
}