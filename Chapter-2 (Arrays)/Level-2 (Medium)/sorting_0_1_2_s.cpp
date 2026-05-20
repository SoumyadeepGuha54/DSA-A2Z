#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
vector<int> sort1(vector<int> nums) {
    sort(nums.begin(), nums.end());
    return nums;
}
// TC: O(nlogn), SC: O(1)

// Better Solution:
vector<int> sort2(vector<int> nums) {
    int n = nums.size(), cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for(auto num : nums) {
        if(num == 0) cnt0++;
        else if(num == 1) cnt1++;
        else cnt2++;
    }
    for(int i = 0; i < cnt0; i++) nums[i] = 0;
    for(int i = cnt0; i < cnt0 + cnt1; i++) nums[i] = 1;
    for(int i = cnt0 + cnt1; i < n; i++) nums[i] = 2;
    return nums;
}
// TC: O(2n), SC: O(1)

// Optimal Solution:
vector<int> sort3(vector<int> nums) {
    int low = 0, mid = 0, high = nums.size() - 1;
    while (mid <= high)
    {
        if(nums[mid] == 0) swap(nums[low++], nums[mid++]);
        else if(nums[mid] == 1) mid++;
        else swap(nums[mid], nums[high--]);
    }
    return nums;
}
// TC: O(n), SC: O(1)

int main()
{
    vector<int> v = {0, 1, 2, 1, 1, 0, 2, 2, 0, 0, 1, 2};
    vector<int> result1 = sort1(v);
    for(auto it : result1) cout << it << " ";
    cout << endl;
    vector<int> result2 = sort2(v);
    for(auto it : result2) cout << it << " ";
    cout << endl;
    vector<int> result3 = sort3(v);
    for(auto it : result3) cout << it << " ";
    return 0;
}