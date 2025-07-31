#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;

    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(3);
    dq.emplace_front(4);

    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << dq.front() << endl;
    cout << dq.back() << endl;

    return 0;
}