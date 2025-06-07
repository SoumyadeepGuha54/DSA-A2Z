#include <iostream>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        char start = 'A';
        for (int j = 0; j <= 2 * i; j++)
        {
            cout << start << " ";
            if (j < i)
            start++;
            else
            start--;
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        cout << endl;
    }
}

int main()
{
    int num;
    cout << "Enter number of lines: ";
    cin >> num;
    pattern(num);
    return 0;
}