#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name: ";
    getline (cin, name);
    int len = name.length();
    cout << len << endl;
    cout << name[2];
    return 0;
}