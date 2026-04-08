#include <bits/stdc++.h>
using namespace std;

bool prime(int x)
{
    int cnt = 0;
    for (int i = 1; i <= x; i++)
    {
        if(x % i == 0) cnt++;
    }
    if(cnt == 2) return true;
    else return false;
}

int main()
{
    int n = 3;
    cout << prime(n);
    return 0;
}