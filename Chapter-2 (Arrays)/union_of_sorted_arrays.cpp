#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
vector<int> union1(vector<int> nums1, vector<int> nums2) {
    set<int> st;
    vector<int> v;
    for(auto it : nums1) st.insert(it);
    for(auto it : nums2) st.insert(it);
    for(auto it : st) v.push_back(it);
    return v;
}
// TC: O(n1logn + n2logn) + O(n1 + n2) [n is size of set]
// SC: O(n1 + n2) + O(n1 + n2) [set(solve) and vector(return)]

// Optimal Solution:
vector<int> union2(vector<int> nums1, vector<int> nums2) {
    int i = 0, j = 0;
    int n1 = nums1.size(), n2 = nums2.size();
    vector<int> v;
    while(i < n1 && j < n2) {
        if(nums1[i] <= nums2[j]) {
            if(v.size() == 0 || v.back() != nums1[i]) v.push_back(nums1[i]);
            i++;
        }
        else {
            if(v.size() == 0 || v.back() != nums2[j]) v.push_back(nums2[j]);
            j++;
        }
    }
    while(i < n1) {
        if(v.size() == 0 || v.back() != nums1[i]) v.push_back(nums1[i]);
        i++;
    }
    while(j < n2) {
        if(v.size() == 0 || v.back() != nums2[j]) v.push_back(nums2[j]);
        j++;
    }
    return v;
}
// TC: O(n1 + n2)
// SC: O(n1 + n2) [vector(return)]

int main() {
    vector<int> v1 = {12, 23, 23, 34, 45, 45};
    vector<int> v2 = {23, 34, 34, 45, 56};
    vector<int> result1 = union1(v1, v2);
    for(auto it : result1) cout << it << " ";
    cout << endl;
    vector<int> result2 = union2(v1, v2);
    for(auto it : result2) cout << it << " ";
    return 0;
}