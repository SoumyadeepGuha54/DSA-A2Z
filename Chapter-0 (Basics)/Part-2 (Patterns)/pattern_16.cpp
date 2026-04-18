#include <iostream>
using namespace std;

void pattern(int n)
{
    char start = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << start << " ";
        }
        start++;
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