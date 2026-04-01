#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Maximum Heap:
    priority_queue<int> pq;

    pq.push(5);  // {5}
    pq.push(2);  // {2, 5}
    pq.push(10); // {2, 5, 10}
    pq.push(8);  // {2, 5, 8, 10}
    // time complexity is O(logn)

    cout << pq.top() << endl;
    // time complexity is O(1)

    pq.pop();
    // time complexity is O(logn)

    // Minimum Heap:
    priority_queue<int, vector<int>, greater<int>> pq2;

    pq2.push(5);  // {5}
    pq2.push(2);  // {5, 2}
    pq2.push(10); // {10, 5, 2}
    pq2.push(8);  // {10, 8, 5, 2}

    cout << pq2.top() << endl;

    pq2.pop();

    return 0;
}