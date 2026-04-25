#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
int largestElement1(vector<int> nums) {
    sort(nums.begin(), nums.end());
    return nums[nums.size() - 1];
}
// time complexity is O(nlogn)

// Optimal Solution:
int largestElement2(vector<int> nums) {
    int largest = nums[0];
    for(auto it : nums) if(it > largest) largest = it;
    return largest;
}
// time complexity is O(n)

int main() {
    vector<int> v = {23, 12, 56, 45, 34};
    cout << largestElement1(v) << endl;
    cout << largestElement2(v) << endl;
    return 0;
}