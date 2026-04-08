#include <bits/stdc++.h>
using namespace std;

int power(int x, int e)
{
    int res = 1;
    for (int exp = 0; exp < e; exp++) res *= x;
    return res;
}

bool armstrong(int x)
{
    int n = 0, temp = x, cnt = log10(x) + 1;
    while (temp > 0)
    {
        n += power((temp % 10), cnt);
        temp /= 10;
    }
    return (x == n);
}

int main()
{
    int n1 = 153, n2 = 121, n3 = 1634;
    cout << armstrong(n1) << " " << armstrong(n2) << " " << armstrong(n3);
    return 0;
}