#include <iostream>
using namespace std;

void print(string str)
{
    cout << "Hello " << str << "!";
}

int main()
{
    string name;
    cout << "Enter your name: ";
    getline (cin, name);
    print(name);
    return 0;
}