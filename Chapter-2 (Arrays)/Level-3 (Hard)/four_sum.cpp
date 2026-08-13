#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
vector<vector<int>> fourSum1(vector<int> nums) {
    set<vector<int>> st;
    for(int i = 0; i < nums.size() - 3; i++) {
        for(int j = i + 1; j < nums.size() - 2; j++) {
            for(int k = j + 1; k < nums.size() - 1; k++) {
                for(int l = k + 1; l < nums.size(); l++) {
                    if(nums[i] + nums[j] + nums[k] + nums[l] == 0) {
                        vector<int> v = {nums[i], nums[j], nums[k], nums[l]};
                        sort(v.begin(), v.end());
                        st.insert(v);
                    }
                }
            }
        }
    }
    vector<vector<int>> res(st.begin(), st.end());
    return res;
}
// TC: O(n^4), SC: O(k) [vector(return)]

// Better Solution:
vector<vector<int>> fourSum2(vector<int> nums) {
    set<vector<int>> st;
    for(int i = 0; i < nums.size() - 3; i++) {
        for(int j = i + 1; j < nums.size() - 2; j++) {
            unordered_set<int> hashset;
            for(int k = j + 1; k < nums.size(); k++) {
                int ele = - nums[i] - nums[j] - nums[k];
                if(hashset.find(ele) != hashset.end()) {
                    vector<int> v = {nums[i], nums[j], nums[k], ele};
                    sort(v.begin(), v.end());
                    st.insert(v);
                }
                hashset.insert(nums[k]);
            }
        }
    }
    vector<vector<int>> res(st.begin(), st.end());
    return res;
}
// TC: O(n^3 * logn), SC: O(k + m) [vector(return) and set(solve)]

// Optimal Solution:
vector<vector<int>> fourSum3(vector<int> nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for(int i = 0; i < nums.size() - 3; i++) {
        if(i > 0 && nums[i] == nums[i - 1]) continue;
        for(int j = i + 1; j < nums.size() - 2; j++) {
            if(j > i + 1 && nums[j] == nums[j - 1]) continue;
            int k = j + 1, l = nums.size() - 1;
            while(k < l) {
                int sum = nums[i] + nums[j] + nums[k] + nums[l];
                if(sum == 0) {
                    vector<int> v = {nums[i], nums[j], nums[k], nums[l]};
                    res.push_back(v);
                    k++, l--;
                    while(k < l && nums[k] == nums[k - 1]) k++;
                    while(k < l && nums[l] == nums[l + 1]) l--;
                }
                else if(sum > 0) l--;
                else k++;
            }
        }
    }
    return res;
}
// TC: O(n^3), SC: O(k) [vector(return)]

int main() {
    vector<int> v = {-1, 0, -2, 2, 2, -1, 1, -1, 0, 0, 2, -2, 1, -2, -1, 2, -2, 0, 1, 1};
    vector<vector<int>> result1 = fourSum1(v);
    for(auto it1 : result1) {
        for(auto it2 : it1) cout << it2 << " ";
        cout << endl;
    }
    cout << endl;
    vector<vector<int>> result2 = fourSum2(v);
    for(auto it1 : result2) {
        for(auto it2 : it1) cout << it2 << " ";
        cout << endl;
    }
    cout << endl;
    vector<vector<int>> result3 = fourSum3(v);
    for(auto it1 : result3) {
        for(auto it2 : it1) cout << it2 << " ";
        cout << endl;
    }
    return 0;
}