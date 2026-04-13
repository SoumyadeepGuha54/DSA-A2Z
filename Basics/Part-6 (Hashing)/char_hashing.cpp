#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter string: ";
    cin >> str;
    
    int hash[256] = {0};
    for(int i = 0; i < str.size(); i++) hash[str[i]]++;

    int q;
    cout << "Enter number of alphabets to search for: ";
    cin >> q;
    while(q--)
    {
        char ch;
        cout << "Enter alphabet: ";
        cin >> ch;
        cout << ch << " : " << hash[ch] << endl;
    }

    return 0;
}