#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> ms;
    // stores elements in sorted order

    ms.insert(1); // {1}
    ms.insert(2); // {1, 2}
    ms.insert(1); // {1, 1, 2}
    ms.insert(3); // {1, 1, 2, 3}

    ms.erase(1); // {2, 3}
    // deletes all occurances of the element

    multiset<int> ms2;

    ms2.insert(1); // {1}
    ms2.insert(2); // {1, 2}
    ms2.insert(1); // {1, 1, 2}
    ms2.insert(3); // {1, 1, 2, 3}
    ms2.insert(1); // {1, 1, 1, 2, 3}
    ms2.insert(1); // {1, 1, 1, 1,  2, 3}

    ms2.erase(ms2.find(1)); // {1, 1, 1, 2, 3}
    // deletes first occurance of the element

    ms2.erase(ms2.find(1), next(ms2.find(1), 2)); // {1, 2, 3}

    return 0;
}