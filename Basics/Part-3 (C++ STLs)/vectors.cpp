#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1;

    v1.push_back(1);
    v1.emplace_back(2);

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1, 2);
    // inserts the integers as a pair by default

    vector<int> v2(4);
    // creates a vector of size 4, where value of each is 0 or garbage

    vector<int> v3(5, 101);
    // creates a vector of size 5, where value of each is 101

    vector<int> v4 = {12, 23, 34, 45, 56};

    cout << v4[0] << endl;
    cout << v4.back() << endl;
    // prints the last element of an array

    vector<int>::iterator it1 = v4.begin();
    // points to the starting position (0th index) of an array
    cout << *it1 << endl;
    it1 += 2;
    cout << *it1 << endl;

    vector<int>::iterator it2 = v4.end();
    // points to the next memory location of the last index of an array
    cout << *it2 << endl;
    it2--;
    cout << *it2 << endl;

    for (vector<int>::iterator it3 = v4.begin(); it3 != v4.end(); it3++)
    {
        cout << *it3 << " ";
    }
    cout << endl;

    for (auto it3 = v4.begin(); it3 != v4.end(); it3++)
    // 'auto' automatically assigns the data type of a variable according to its use-case
    {
        cout << *it3 << " ";
    }
    cout << endl;

    for (auto it3 : v4)
    // this opeartion is called a for-each loop
    {
        cout << it3 << " ";
    }
    cout << endl;

    v4.erase(v4.begin() + 1);
    for (auto it : v4)
    {
        cout << it << " ";
    }
    cout << endl;

    v4.erase(v4.begin() + 1, v4.begin() + 3);
    // takes the index of the first element and the index AFTER the last element
    for (auto it : v4)
    {
        cout << it << " ";
    }
    cout << endl;

    v4.insert(v4.begin() + 1, 23);
    for (auto it : v4)
    {
        cout << it << " ";
    }
    cout << endl;

    v4.insert(v4.begin() + 2, 2, 34);
    for (auto it : v4)
    {
        cout << it << " ";
    }
    cout << endl;

    vector<int> draft(2, 67);
    v4.insert(v4.end(), draft.begin(), draft.end());
    for (auto it : v4)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << v4.size();
    cout << endl;

    v4.pop_back();
    for (auto it : v4)
    {
        cout << it << " ";
    }
    cout << endl;

    for (auto it : v1)
    {
        cout << it << " ";
    }
    cout << endl;
    for (auto it : v3)
    {
        cout << it << " ";
    }
    cout << endl;
    v1.swap(v3);
    // swaps the two vectors
    for (auto it : v1)
    {
        cout << it << " ";
    }
    cout << endl;
    for (auto it : v3)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << v4.empty() << endl;
    // checks if the array is empty or not
    v4.clear();
    cout << v4.empty() << endl;

    return 0;
}