#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1;
    // implementation of singly linked list

    v1.push_back(1);    // {1}
    v1.emplace_back(2); // {1, 2}

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});  // {{1, 2}}
    vec.emplace_back(1, 2); // {{1, 2}, {1, 2}}
    // inserts the integers as a pair by default, faster that 'push_back'

    vector<int> v2(4); // {0, 0, 0, 0}
    // creates a vector of size 4, where value of each is 0 or garbage

    vector<int> v3(5, 101); // {101, 101, 101, 101, 101}
    // creates a vector of size 5, where value of each is 101

    vector<int> v4 = {12, 23, 34, 45, 56}; // {12, 23, 34, 45, 56}

    vector<int> v5(v4); // {12, 23, 34, 45, 56}
    // copies elements of a vector to another vector

    cout << v4[0] << endl; // 12
    // prints first element of vector
    cout << v4.back() << endl; // 56
    // prints last element of vector

    vector<int>::iterator it1 = v4.begin();
    // points to the starting position (0th index) of vector
    cout << *it1 << endl; // 12
    it1 += 2;
    cout << *it1 << endl; // 34

    vector<int>::iterator it2 = v4.end();
    // points to the next memory location of the last index of vector
    cout << *it2 << endl; // 0
    it2--;
    cout << *it2 << endl; // 56

    for (vector<int>::iterator it3 = v4.begin(); it3 != v4.end(); it3++)
    {
        cout << *it3 << " "; // {12, 23, 34, 45, 56}
    }
    cout << endl;

    for (auto it3 = v4.begin(); it3 != v4.end(); it3++)
    // 'auto' automatically assigns the data type of a variable according to its use-case
    {
        cout << *it3 << " "; // {12, 23, 34, 45, 56}
    }
    cout << endl;

    for (auto it3 : v4)
    // this opeartion is called a for-each loop
    {
        cout << it3 << " "; // {12, 23, 34, 45, 56}
    }
    cout << endl;

    v4.erase(v4.begin() + 1); // {12, 34, 45, 56}

    v4.erase(v4.begin() + 1, v4.begin() + 3); // {12, 56}
    // takes the index of the first element and the index AFTER the last element

    v4.insert(v4.begin() + 1, 23); // {12, 23, 56}

    v4.insert(v4.begin() + 2, 2, 34); // {12, 23, 34, 34, 56}

    vector<int> draft(2, 67); // {67, 67}
    // declares a vector named 'draft'
    v4.insert(v4.end(), draft.begin(), draft.end()); // {12, 23, 34, 34, 56, 67, 67}

    cout << v4.size(); // 7

    v4.pop_back(); // {12, 23, 34, 34, 56, 67}

    v1.swap(v3);
    // swaps the two vectors

    cout << v4.empty() << endl; // 0
    // checks if vector is empty or not
    v4.clear();
    // deletes all elements in vector
    cout << v4.empty() << endl; // 1

    return 0;
}