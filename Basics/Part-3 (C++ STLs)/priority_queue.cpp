#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Maximum Heap:
    priority_queue<int> pq;

    pq.push(5);
    pq.push(2);
    pq.push(10);
    pq.push(8);
    // time complexity of push is O(logn)
    
    cout << pq.top() << endl;
    // time complexity of top is O(1)
    
    pq.pop();
    // time complexity of pop is O(logn)
    cout << pq.top() << endl;

    // Minimum Heap:
    priority_queue<int, vector<int>, greater<int>> pq2;

    pq2.push(5);
    pq2.push(2);
    pq2.push(10);
    pq2.push(8);

    cout << pq2.top() << endl;

    pq2.pop();
    cout << pq2.top() << endl;

    return 0;
}