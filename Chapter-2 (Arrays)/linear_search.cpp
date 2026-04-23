#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> nums, int target) {
    for(int i = 0; i < nums.size(); i++) if(nums[i] == target) return i;
    return -1;
}
// time complexity is O(n)

int main() {
    vector<int> v = {23, 12, 56, 45, 34};
    cout << linearSearch(v, 56);
    return 0;
}