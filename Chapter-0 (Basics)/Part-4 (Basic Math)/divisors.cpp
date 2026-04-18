#include <bits/stdc++.h>
using namespace std;

void divisors_v1(int n)
// time complexity is O(n)
{
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0) cout << i << " ";
    }
}

void divisors_v2(int n)
// time complexity is O(sqrt(n))
{
    set<int> st;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            st.insert(i);
            if (n / i != i) st.insert(n / i);
        }
    }
    for(auto it : st) cout << it << " ";
}

int main()
{
    int x = 36;
    divisors_v1(x);
    cout << endl;
    divisors_v2(x);
    return 0;
}