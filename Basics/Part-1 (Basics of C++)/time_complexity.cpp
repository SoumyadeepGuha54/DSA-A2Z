#include <iostream>
using namespace std;

int main()
{
    int n;

    for (int i = 0; i < n; i++)
    {
        /* code */
    }
    // Time complexity of the upper loop is: O(n)

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            /* code */
        }
    }
    // Time complexity of the upper loop is: O(n^2)

    return 0;
}