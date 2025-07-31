#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    // uses LIFO (Last In First Out)
    // time complexity is O(1) for all the operations

    st.push(1);
    st.push(2);
    st.emplace(3);
    st.emplace(4);

    cout << st.top() << endl;

    st.pop();
    cout << st.top() << endl;

    cout << st.size() << endl;
    cout << st.empty() << endl;

    return 0;
}