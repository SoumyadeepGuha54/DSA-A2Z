#include <iostream>
using namespace std;

void pattern(int n)
{
    char start = 64 + n;
    for (int i = 0; i < n; i++)
    {
        char temp = start;
        for (int j = 0; j <= i; j++)
        {
            cout << temp << " ";
            temp++;
        }
        cout << endl;
        start--;
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