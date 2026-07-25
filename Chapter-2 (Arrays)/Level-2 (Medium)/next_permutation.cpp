#include <bits/stdc++.h>
using namespace std;

void nextPermutation1(vector<int> &nums) {
    next_permutation(nums.begin(), nums.end());
}

void nextPermutation2(vector<int> &nums) {
    int index = -1;
    for(int i = nums.size() - 1; i > 0; i--) {
        if(nums[i - 1] < nums[i]) {
            index = i - 1;
            break;
        }
    }
    if(index == -1) {
        reverse(nums.begin(), nums.end());
        return;
    }
    for(int i = nums.size() - 1; i > index; i--) {
        if(nums[i] > nums[index]) {
            swap(nums[i], nums[index]);
            break;
        }
    }
    reverse(nums.begin() + index + 1, nums.end());
}

int main() {
    vector<int> v1 = {1, 2, 3};
    nextPermutation1(v1);
    for(auto it : v1) cout << it << " ";
    cout << endl;
    vector<int> v2 = {3, 2, 1};
    nextPermutation1(v2);
    for(auto it : v2) cout << it << " ";
    cout << endl;
    vector<int> v3 = {2, 1, 5, 4, 3, 0, 0};
    nextPermutation2(v3);
    for(auto it : v3) cout << it << " ";
    cout << endl;
    vector<int> v4 = {0, 0, 1, 2, 3, 4, 5};
    nextPermutation2(v4);
    for(auto it : v4) cout << it << " ";
    cout << endl;
    vector<int> v5 = {5, 4, 3, 2, 1, 0, 0};
    nextPermutation2(v5);
    for(auto it : v5) cout << it << " ";
    return 0;
}