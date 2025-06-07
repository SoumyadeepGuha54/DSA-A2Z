#include <iostream>
using namespace std;

void pattern(int n)
{
    int spaces = 2 * (n - 1);
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int stars = i;
        if (i >= n)
            stars = 2 * (n - 1) - i;
        for (int j = 0; j <= stars; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < spaces; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= stars; j++)
        {
            cout << "* ";
        }
        cout << endl;
        if (i < n - 1)
            spaces -= 2;
        else
            spaces += 2;
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