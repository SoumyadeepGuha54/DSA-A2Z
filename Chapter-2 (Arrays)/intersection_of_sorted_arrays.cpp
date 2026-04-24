#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
vector<int> intersection1(vector<int> nums1, vector<int> nums2) {
    int n1 = nums1.size(), n2 = nums2.size();
    vector<int> v, visited(n2);
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(nums1[i] == nums2[j] && visited[j] == 0) {
                v.push_back(nums1[i]);
                visited[j] = 1;
                break;
            }
            else if(nums1[i] < nums2[j]) break;
        }
    }
    return v;
}
// TC: O(n1 * n2)
// SC: O(n2) [vector(solve)]

// Optimal Solution:
vector<int> intersection2(vector<int> nums1, vector<int> nums2) {
    int i = 0, j = 0;
    int n1 = nums1.size(), n2 = nums2.size();
    vector<int> v;
    while(i < n1 && j < n2) {
        if(nums1[i] < nums2[j]) i++;
        else if(nums1[i] > nums2[j]) j++;
        else {
            v.push_back(nums1[i]);
            i++, j++;
        }
    }
    return v;
}
// TC: O(n1 + n2)
// SC: O(1)

int main() {
    vector<int> v1 = {12, 23, 23, 34, 45, 45};
    vector<int> v2 = {23, 34, 34, 45, 56};
    vector<int> result1 = intersection1(v1, v2);
    for(auto it : result1) cout << it << " ";
    cout << endl;
    vector<int> result2 = intersection2(v1, v2);
    for(auto it : result2) cout << it << " ";
    return 0;
}