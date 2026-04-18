#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p1 = {1, 3};
    cout << p1.first << " " << p1.second << endl;

    pair<int, pair<int, int>> p2 = {4, {1, 3}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    pair<int, int> arr[] = {{2, 3}, {5, 7}, {11, 13}};
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].first << " ";
        cout << arr[i].second << " ";
    }

    return 0;
}