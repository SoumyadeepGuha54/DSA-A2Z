#include <iostream>
using namespace std;

int inc(int &n)
{
    n += 5;
}

int main()
{
    int num = 10;
    inc(num);
    cout << num;
    return 0;
}