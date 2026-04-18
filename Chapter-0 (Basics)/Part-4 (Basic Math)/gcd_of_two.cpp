#include <bits/stdc++.h>
using namespace std;

int gcd_v1(int x1, int x2)
{
    int f = 1;
    for (int i = 1; i <= x1; i++)
    {
        if (x1 % i == 0 && x2 % i == 0) f = i;
    }
    return f;
}

int gcd_v2(int x1, int x2)
{
    int f = 1;
    for (int i = 1; i <= min(x1, x2); i++)
    {
        if (x1 % i == 0 && x2 % i == 0) f = i;
    }
    return f;
}

int gcd_v3(int x1, int x2)
{
    for (int i = min(x1, x2); i >= 1; i--)
    {
        if (x1 % i == 0 && x2 % i == 0)
        {
            return i;
            break;
        }
    }
}

// Euclidian Algorithm:
int gcd_v4(int x1, int x2)
{
    while (x1 != 0 && x2 != 0)
    {
        if(x1 > x2) x1 = x1 % x2;
        else x2 = x2 % x1;
    }
    if(x1 == 0) return x2;
    else return x1;
}

int main()
{
    int n1 = 60, n2 = 108;
    cout << gcd_v1(n1, n2) << " " << gcd_v2(n1, n2) << " " << gcd_v3(n1, n2) << " " << gcd_v4(n1, n2);
    return 0;
}