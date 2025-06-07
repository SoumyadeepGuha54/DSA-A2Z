#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element " << i + 1 << " : ";
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Element " << i + 1 << " is: " << arr[i] << endl;
    }
    
    return 0;
}