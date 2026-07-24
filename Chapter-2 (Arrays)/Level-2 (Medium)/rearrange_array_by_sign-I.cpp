#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
vector<int> rearrangeArray1(vector<int> nums) {
    vector<int> pos, neg, res(nums.size());
    for(auto num : nums) {
        if(num > 0) pos.push_back(num);
        else neg.push_back(num);
    }
    for(int i = 0; i < nums.size() / 2; i++) {
        res[i * 2] = pos[i];
        res[i * 2 + 1] = neg[i];
    }
    return res;
}
// TC: O(n + (n / 2)), SC: O(n)

// Optimal Solution:
vector<int> rearrangeArray2(vector<int> nums) {
    vector<int> res(nums.size());
    int i = 0, j = 1;
    for(auto num : nums) {
        if(num > 0) res[i] = num, i += 2;
        else res[j] = num, j += 2;
    }
    return res;
}
// TC: O(n), SC: O(n)

int main() {
    vector<int> v = {3, 1, -2, -5, 2, -4};
    vector<int> result1 = rearrangeArray1(v);
    for(auto it : result1) cout << it << " ";
    cout << endl;
    vector<int> result2 = rearrangeArray2(v);
    for(auto it : result2) cout << it << " ";
    return 0;
}