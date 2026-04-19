#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach:
int secondLargestElement1(vector<int> nums) {
    sort(nums.begin(), nums.end());
    int max = nums[nums.size() - 1];
    for(int i = nums.size() - 2; i >= 0; i--) if(nums[i] < max) return nums[i];
    return -1;
}
// time complexity is O(nlogn)

// Better Solution:
int secondLargestElement2(vector<int> nums) {
    int max = nums[0], max2 = -1;
    for(auto it : nums) if(it > max) max = it;
    for(int i = 0; i < nums.size(); i++) if(nums[i] > max2 && nums[i] < max) max2 = nums[i];
    return max2;
}
// time complexity is O(n)

// Optimal Solution:
int secondLargestElement3(vector<int> nums) {
    int max = nums[0], max2 = -1;
    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] > max) max2 = max, max = nums[i];
        else if(nums[i] < max && nums[i] > max2) max2 = nums[i];
    }
    return max2;
}
// time complexity is O(n)

int main() {
    vector<int> v = {23, 12, 56, 45, 34, 56};
    cout << secondLargestElement1(v) << endl;
    cout << secondLargestElement2(v) << endl;
    cout << secondLargestElement3(v) << endl;
    return 0;
}