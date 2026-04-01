#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    // uses LIFO (Last In First Out)
    // time complexity is O(1) for all the operations

    st.push(1);    // {1}
    st.push(2);    // {1, 2}
    st.emplace(3); // {1, 2, 3}
    st.emplace(4); // {1, 2, 3, 4}
    st.pop();      // {1, 2, 3}

    cout << st.top() << endl;

    cout << st.size() << endl;
    cout << st.empty() << endl;

    stack<int> st2;
    st.swap(st2);

    return 0;
}