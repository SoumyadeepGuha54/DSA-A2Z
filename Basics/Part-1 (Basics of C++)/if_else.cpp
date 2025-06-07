#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if (marks < 0)
    {
        cout << "Invalid marks!";
    }
    else if (marks < 30)
    {
        cout << "F";
    }
    else if (marks < 45)
    {
        cout << "C";
    }
    else if (marks < 60)
    {
        cout << "B";
    }
    else if (marks < 75)
    {
        cout << "A";
    }
    else if (marks < 90)
    {
        cout << "A+";
    }
    else if (marks <= 100)
    {
        cout << "O";
    }
    else
    {
        cout << "Invalid marks!";
    }
    return 0;
}