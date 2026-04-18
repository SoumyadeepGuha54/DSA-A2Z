#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mp;
    // stores elements in key-value pairs, with unique keys in sorted order

    map<int, pair<int, int>> mp1;
    map<pair<int, int>, int> mp2;
    // keys and values can be any datatype

    mp[1] = 101;         // [{1, 101}]
    mp.emplace(3, 103);  // [{1, 101}, {3, 103}]
    mp.insert({2, 102}); // [{1, 101}, {2, 102}, {3, 103}]

    mp2[{1, 1}] = 101; // [{{1, 1}, 101}]

    cout << mp[2] << endl;
    cout << mp[4] << endl;
    // if it fails to find key, it returns 0 as value and inserts it in map

    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }

    auto it = mp.find(3);
    cout << it->second << endl;
    auto it = mp.find(5);
    // if it fails to find key, it points to the last element

    return 0;
}