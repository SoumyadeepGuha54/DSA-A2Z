#include <bits/stdc++.h>
using namespace std;

bool armstrong(int x)
{
    int n = 0, temp = x;
    while (temp > 0)
    {
        n += ((temp % 10) * (temp % 10) * (temp % 10));
        temp /= 10;
    }
    return (x == n);
}

int main()
{
    int n1 = 153, n2 = 121, n3 = 10;
    cout << armstrong(n1) << " " << armstrong(n2) << " " << armstrong(n3);
    return 0;
}