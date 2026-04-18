#include <iostream>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        char start = 'A';
        for (int j = 0; j < n - i; j++)
        {
            cout << start << " ";
            start++;
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