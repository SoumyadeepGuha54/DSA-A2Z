#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> nums) {
    for(int i = 0; i < nums.size() - 1; i++) if(nums[i] > nums[i + 1]) return false;
    return true;
}

int main() {
    vector<int> v1 = {23, 12, 56, 45, 34};
    cout << isSorted(v1) << endl;
    vector<int> v2 = {12, 23, 34, 45, 56};
    cout << isSorted(v2) << endl;
    return 0;
}