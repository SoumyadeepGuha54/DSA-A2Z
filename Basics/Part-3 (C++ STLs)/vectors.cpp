#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1;

    v1.push_back(1);
    v1.emplace_back(2);

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector <int> v2(4);
    
    vector <int> v3(5, 101);

    return 0;
}