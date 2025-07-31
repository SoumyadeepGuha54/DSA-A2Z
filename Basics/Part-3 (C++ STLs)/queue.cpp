#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    // uses FIFO (First In First Out)
    // time complexity is O(1) for all the operations

    q.push(1);
    q.push(2);
    q.emplace(3);
    q.emplace(4);

    cout << q.front() << endl;
    cout << q.back() << endl;

    q.pop();
    cout << q.front() << endl;
    cout << q.back() << endl;

    cout << q.size() << endl;
    cout << q.empty() << endl;

    return 0;
}