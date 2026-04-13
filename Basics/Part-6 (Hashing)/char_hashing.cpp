#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter string: ";
    cin >> str;
    
    int hash[26] = {0};
    for(int i = 0; i < str.size(); i++) hash[str[i] - 'a']++;

    int q;
    cout << "Enter number of alphabets to search for: ";
    cin >> q;
    while(q--)
    {
        char ch;
        cout << "Enter alphabet: ";
        cin >> ch;
        cout << ch << " : " << hash[ch - 'a'] << endl;
    }

    return 0;
}