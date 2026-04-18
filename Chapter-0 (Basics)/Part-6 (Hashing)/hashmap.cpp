#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    int arr[n];
    map<int, int> mp;
    // time complexity is O(logn)
    
    cout << "Enter elements:" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    cout << "Frequency Chart:" << endl;
    for(auto it : mp) cout << it.first << " : " << it.second << endl;

    return 0;
}