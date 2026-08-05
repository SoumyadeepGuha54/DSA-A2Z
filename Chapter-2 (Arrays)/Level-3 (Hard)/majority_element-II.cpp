#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
vector<int> majorityElement1(vector<int> nums) {
    vector<int> res;
    for(int i = 0; i < nums.size(); i++) if(res.size() == 0 || res[0] != nums[i]) {
        int cnt = 0;
        for(int j = 0; j < nums.size(); j++) if(nums[i] == nums[j]) cnt++;
        if(cnt > nums.size() / 3) res.push_back(nums[i]);
        if(res.size() == 2) break;
    }
    return res;
}
// TC: O(n^2), SC: O(1)

// Better Solution 1:
vector<int> majorityElement2(vector<int> nums) {
    unordered_map<int, int> mp;
    for(auto num : nums) mp[num]++;
    vector<int> res;
    for(auto it : mp) if(it.second > nums.size() / 3) res.push_back(it.first);
    return res;
}
// TC: O(n), SC: O(n)

// Better Solution 2:
vector<int> majorityElement3(vector<int> nums) {
    int mn = (nums.size() / 3) + 1;
    unordered_map<int, int> mp;
    vector<int> res;
    for(auto num : nums) if(++mp[num] == mn) res.push_back(num);
    return res;
}
// TC: O(n), SC: O(n)

// Optimal Solution (Moore's Voting Algorithm):
vector<int> majorityElement4(vector<int> nums) {
    int cnt1 = 0, cnt2 = 0, ele1 = INT_MIN, ele2 = INT_MIN;
    for(auto num : nums) {
        if(cnt1 == 0 && ele2 != num) cnt1++, ele1 = num;
        else if(cnt2 == 0 && ele1 != num) cnt2++, ele2 = num;
        else if(num == ele1) cnt1++;
        else if(num == ele2) cnt2++;
        else cnt1--, cnt2--;
    }
    cnt1 = 0, cnt2 = 0;
    for(auto num : nums) {
        if(num == ele1) cnt1++;
        if(num == ele2) cnt2++;
    }
    vector<int> res;
    if(cnt1 > nums.size() / 3) res.push_back(ele1);
    if(cnt2 > nums.size() / 3) res.push_back(ele2);
    return res;
}
// TC: O(n), SC: O(1)

int main() {
    vector<int> v = {1, 1, 2, 3, 2, 1, 3, 2};
    vector<int> result1 = majorityElement1(v);
    for(auto it : result1) cout << it << " ";
    cout << endl;
    vector<int> result2 = majorityElement2(v);
    for(auto it : result2) cout << it << " ";
    cout << endl;
    vector<int> result3 = majorityElement3(v);
    for(auto it : result3) cout << it << " ";
    cout << endl;
    vector<int> result4 = majorityElement4(v);
    for(auto it : result4) cout << it << " ";
    return 0;
}