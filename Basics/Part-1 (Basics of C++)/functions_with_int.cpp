#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
    cout << num1 << " + " << num2 << " = " << sum(num1, num2) << endl;
    int maximum = max(num1, num2);
    cout << "The maximum number is: " << maximum << endl;
    int minimum = min(num1, num2);
    cout << "The minimum number is: " << minimum << endl;
    return 0;
}