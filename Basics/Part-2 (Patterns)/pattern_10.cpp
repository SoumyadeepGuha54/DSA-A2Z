#include <iostream>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n * 2 - 1; i++)
    {
        if (i < n)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int j = 0; j < 2 * n - i - 1; j++)
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