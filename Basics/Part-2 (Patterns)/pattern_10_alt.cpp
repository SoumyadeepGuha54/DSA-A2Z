#include <iostream>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int s = i;
        if (i >= n)
            s = 2 * (n - 1) - i;
        for (int j = 0; j <= s; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    pattern(num);
    return 0;
}