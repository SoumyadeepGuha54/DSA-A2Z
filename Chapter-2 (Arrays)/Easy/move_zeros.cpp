#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
void moveZeros1(vector<int> &nums) {
    vector<int> temp;
    for(auto num : nums) if(num != 0) temp.emplace_back(num);
    for(int i = 0; i < temp.size(); i++) nums[i] = temp[i];
    for(int i = temp.size(); i < nums.size(); i++) nums[i] = 0;
}
// time complexity is O(n), space complexity is O(n)

// Optimal Solution:
void moveZeros2(vector<int> &nums) {
    int i = 0, n = nums.size();
    for(int j = 0; j < n; j++) if(nums[j] != 0) {
        swap(nums[i], nums[j]);
        i++;
    }
}
// time complexity is O(n), space complexity is O(1)

int main() {
    vector<int> v1 = {0, 1, 0, 2, 1, 0, 0, 4, 3, 0};
    moveZeros1(v1);
    for(auto it : v1) cout << it << " ";
    cout << endl;
    vector<int> v2 = {0, 1, 0, 2, 1, 0, 0, 4, 3, 0};
    moveZeros2(v2);
    for(auto it : v2) cout << it << " ";
    return 0;
}