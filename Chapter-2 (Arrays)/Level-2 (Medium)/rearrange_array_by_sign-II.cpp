#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int> nums) {
    vector<int> pos, neg, res(nums.size());
    for(auto num : nums) {
        if(num > 0) pos.push_back(num);
        else neg.push_back(num);
    }
    if(pos.size() > neg.size()) {
        for(int i = 0; i < neg.size(); i++) {
            res[i * 2] = pos[i];
            res[i * 2 + 1] = neg[i];
        }
        int index = neg.size() * 2;
        for(int i = neg.size(); i < pos.size(); i++) res[index++] = pos[i];
    } else {
        for(int i = 0; i < pos.size(); i++) {
            res[i * 2] = pos[i];
            res[i * 2 + 1] = neg[i];
        }
        int index = pos.size() * 2;
        for(int i = pos.size(); i < neg.size(); i++) res[index++] = neg[i];
    }
    return res;
}
// TC: O(2n), SC: O(n)

int main() {
    vector<int> v1 = {3, 1, -2, 4, -5, 2, 7};
    vector<int> v2 = {3, -1, -2, -4, -5, 2, -7};
    vector<int> result1 = rearrangeArray(v1);
    for(auto it : result1) cout << it << " ";
    cout << endl;
    vector<int> result2 = rearrangeArray(v2);
    for(auto it : result2) cout << it << " ";
    return 0;
}