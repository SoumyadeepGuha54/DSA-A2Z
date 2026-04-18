#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    int arr[n];
    unordered_map<int, int> mp;
    // best and average case time complexity is O(1)
    // worst case time complexity is O(n) (extreme rare case)
    
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