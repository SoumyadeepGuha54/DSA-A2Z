#include <iostream>
using namespace std;

int main()
{
    int num = 10101;
    cout << num << endl;

    short s_num = 11;
    cout << s_num << endl;

    long l_num = 10110010;
    cout << l_num << endl;

    long long ll_num = 101100110010;
    cout << ll_num << endl;

    float frac = 25.317;
    cout << frac << endl;

    double d_frac = 25.317948;
    cout << d_frac << endl;

    long double ld_frac = 25.317825649;
    cout << ld_frac << endl;

    string str1, str2;
    cout << "Enter your name: ";
    cin >> str1 >> str2;
    cout << str1 << " " << str2 << endl;

    string str;
    getchar();
    cout << "Enter your name again: ";
    getline(cin, str);
    cout << str;

    char ch;
    cout << "Enter any charecter: ";
    cin >> ch;
    cout << ch;

    return 0;
}