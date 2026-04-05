#include <bits/stdc++.h>
using namespace std;

bool palindrome(int x)
{
    if(x < 0) return false;
    int rev = 0, temp = x;
    while (temp > 0)
    {
        rev = rev * 10 + (temp % 10);
        if (temp > INT_MAX || temp < INT_MIN) return 0;
        temp /= 10;
    }
    return (rev == x);
}

int main()
{
    int n1 = 121, n2 = -121, n3 = 10;
    cout << palindrome(n1) << " " << palindrome(n2) << " " << palindrome(n3);
    return 0;
}