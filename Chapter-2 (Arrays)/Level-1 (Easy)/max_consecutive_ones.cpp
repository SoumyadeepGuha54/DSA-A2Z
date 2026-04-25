#include <bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(vector<int> nums) {
    int mx = 0, cnt = 0;
    for(auto it : nums) {
        if(it == 1) {
            cnt++;
            mx = max(cnt, mx);
        }
        else cnt = 0;
    }
    return mx;
}

int main() {
    vector<int> v = {0, 1, 1, 0, 0, 1, 1, 1, 0};
    cout << maxConsecutiveOnes(v);
    return 0;
}