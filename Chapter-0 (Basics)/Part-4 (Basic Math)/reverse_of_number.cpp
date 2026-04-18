#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    int rev = 0;
    while (x != 0)
    {
        rev = rev * 10 + (x % 10);
        if (x > INT_MAX || x < INT_MIN) return 0;
        x /= 10;
    }
    return rev;
}

int main()
{
    int n1 = 123, n2 = -123, n3 = 120;
    cout << reverse(n1) << " " << reverse(n2) << " " << reverse(n3);
    return 0;
}