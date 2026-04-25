#include <bits/stdc++.h>
using namespace std;

int missingNumber0(vector<int>& nums) {
    int n = nums.size();
    int sum = (n * (n + 1)) / 2, temp = 0;
    for(auto it : nums) temp += it;
    return sum - temp;
}

int missingNumber1(vector<int> nums) {
    int n = nums.size() + 1;
    int sum = (n * (n + 1)) / 2, temp = 0;
    for(auto it : nums) temp += it;
    return sum - temp;
}

int main() {
    vector<int> v0 = {4, 1, 0, 5, 2};
    cout << missingNumber0(v0);
    cout << endl;
    vector<int> v1 = {4, 1, 5, 2};
    cout << missingNumber1(v1);
    return 0;
}