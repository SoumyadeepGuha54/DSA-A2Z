#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    if (p1.first > p2.first)
        return true;
    return false;
}

int main()
{
    int arr[] = {23, 12, 45, 34};
    sort(arr, arr + 4);                 // {12, 23, 34, 45}
    sort(arr, arr + 4, greater<int>()); // {45, 34, 23, 12}

    vector<int> v = {23, 12, 45, 34};
    sort(v.begin(), v.end());                 // {12, 23, 34, 45}
    sort(v.begin(), v.end(), greater<int>()); // {45, 34, 23, 12}

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    sort(a, a + 3, comp);
    for (int i = 0; i < 3; i++)
    {
        cout << a[i].first << " " << a[i].second << endl;
    }

    int num1 = 7;
    int cnt1 = __builtin_popcount(num1); // 3
    // counts number of set bits in a 32/64 bit system

    long long int num2 = 563214789025;
    int cnt2 = __builtin_popcountll(num2); // 14

    string str1 = "123";
    do
    {
        cout << str1 << " ";
    } while (next_permutation(str1.begin(), str1.end()));
    // permutation occurs in dictionary order

    cout << endl;

    string str2 = "312";
    do
    {
        cout << str2 << " ";
    } while (next_permutation(str2.begin(), str2.end()));
    cout << endl;
    sort(str2.begin(), str2.end());
    // sorts the string in dictionary order
    do
    {
        cout << str2 << " ";
    } while (next_permutation(str2.begin(), str2.end()));

    int min = *min_element(arr, arr + 4); // 12
    int max = *max_element(arr, arr + 4); // 45

    return 0;
}