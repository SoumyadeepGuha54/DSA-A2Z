#include <bits/stdc++.h>
using namespace std;

bool prime_v1(int x)
{
    int cnt = 0;
    for (int i = 1; i <= x; i++)
    {
        if(x % i == 0) cnt++;
    }
    if(cnt == 2) return true;
    else return false;
}

bool prime_v2(int x)
{
    if(x == 1) return false;
    else
    {
        int cnt = 0;
        for (int i = 1; i * i <= x; i++)
        {
            if (x % i == 0) cnt++;
        }
        if (cnt == 1) return true;
        else return false;
    }
}

int main()
{
    int n = 1;
    cout << prime_v1(n) << " " << prime_v2(n);
    return 0;
}