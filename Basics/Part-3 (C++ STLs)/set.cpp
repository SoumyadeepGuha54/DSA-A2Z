#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;
    // stores unique elements in sorted order

    st.insert(1);  // {1}
    st.emplace(2); // {1, 2}
    st.insert(2);  // {1, 2}
    st.insert(4);  // {1, 2, 4}
    st.insert(3);  // {1, 2, 3, 4}
    st.insert(5);  // {1, 2, 3, 4, 5}

    cout << *st.begin() << endl;
    cout << *st.end() << endl;
    cout << st.size() << endl;
    cout << st.empty() << endl;

    auto it = st.find(3);
    auto it = st.find(6);
    // if iterator fails to find an element in set, it returns the end element

    st.erase(3); // {1, 2, 4, 5}
    // time complexity is O(logn)

    auto it1 = st.find(2);
    auto it2 = st.find(5);
    st.erase(it1, it2); // {1, 5}

    return 0;
}