#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter string: ";
    cin >> str;
    
    map<char, int> mp;
    
    for(int i = 0; i < str.size(); i++)
    {
        mp[str[i]]++;
    }

    cout << "Frequency Chart:" << endl;
    for(auto it : mp) cout << it.first << " : " << it.second << endl;

    return 0;
}