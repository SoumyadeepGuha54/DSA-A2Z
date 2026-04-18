#include <iostream>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (i < n)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "* ";
            }
            for (int j = 0; j < 2 * (n - i - 1); j++)
            {
                cout << "  ";
            }
            for (int j = 0; j <= i; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int j = 0; j < 2 * n - (i + 1); j++)
            {
                cout << "* ";
            }
            for (int j = 0; j < 2 * (i - n + 1); j++)
            {
                cout << "  ";
            }
            for (int j = 0; j < 2 * n - (i + 1); j++)
            {
                cout << "* ";
            }
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