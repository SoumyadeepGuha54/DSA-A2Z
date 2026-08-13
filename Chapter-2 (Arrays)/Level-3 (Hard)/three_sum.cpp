#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
vector<vector<int>> threeSum1(vector<int> nums) {
    set<vector<int>> st;
    for(int i = 0; i < nums.size() - 2; i++) {
        for(int j = i + 1; j < nums.size() - 1; j++) {
            for(int k = j + 1; k < nums.size(); k++) {
                if(nums[i] + nums[j] + nums[k] == 0) {
                    vector<int> v = {nums[i], nums[j], nums[k]};
                    sort(v.begin(), v.end());
                    st.insert(v);
                }
            }
        }
    }
    vector<vector<int>> res(st.begin(), st.end());
    return res;
}
// TC: O(n^3), SC: O(k) [vector(return)]

// Better Solution:
vector<vector<int>> threeSum2(vector<int> nums) {
    set<vector<int>> st;
    for(int i = 0; i < nums.size() - 2; i++) {
        unordered_set<int> hashset;
        for(int j = i + 1; j < nums.size(); j++) {
            int ele = - nums[i] - nums[j];
            if(hashset.find(ele) != hashset.end()) {
                vector<int> v = {nums[i], nums[j], ele};
                sort(v.begin(), v.end());
                st.insert(v);
            }
            hashset.insert(nums[j]);
        }
    }
    vector<vector<int>> res(st.begin(), st.end());
    return res;
}
// TC: O(n^2 * logn), SC: O(k + m) [vector(return) and set(solve)]

// Optimal Solution:
vector<vector<int>> threeSum3(vector<int> nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for(int i = 0; i < nums.size() - 2; i++) {
        if(i > 0 && nums[i] == nums[i - 1]) continue;
        int j = i + 1, k = nums.size() - 1;
        while(j < k) {
            int sum = nums[i] + nums[j] + nums[k];
            if(sum == 0) {
                vector<int> v = {nums[i], nums[j], nums[k]};
                res.push_back(v);
                j++, k--;
                while(j < k && nums[j] == nums[j - 1]) j++;
                while(j < k && nums[k] == nums[k + 1]) k--;
            }
            else if(sum > 0) k--;
            else j++;
        }
    }
    return res;
}
// TC: O(n^2), SC: O(k) [vector(return)]

int main() {
    vector<int> v = {-1, 0, -2, 2, 2, -1, 1, -1, 0, 0, 2, -2, 1, -2, -1, 2, -2, 0, 1, 1};
    vector<vector<int>> result1 = threeSum1(v);
    for(auto it1 : result1) {
        for(auto it2 : it1) cout << it2 << " ";
        cout << endl;
    }
    cout << endl;
    vector<vector<int>> result2 = threeSum2(v);
    for(auto it1 : result2) {
        for(auto it2 : it1) cout << it2 << " ";
        cout << endl;
    }
    cout << endl;
    vector<vector<int>> result3 = threeSum3(v);
    for(auto it1 : result3) {
        for(auto it2 : it1) cout << it2 << " ";
        cout << endl;
    }
    return 0;
}