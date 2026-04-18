#include <bits/stdc++.h>
using namespace std;

int hashh[10000000] = {0};
// maximum length of globally declared array is 10^7 to 10^8

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter elements:" << endl;
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    // Precomputation:
    int hash[1000000] = {0};
    // maximum length of locally declared array is 10^5 to 10^6
    for(int i = 0; i < n; i++) hashh[arr[i]] += 1;

    int q;
    cout << "Enter number of elements to search for: ";
    cin >> q;
    while(q--)
    {
        int num;
        cout << "Enter element: ";
        cin >> num;
        cout << num << " : " << hashh[num] << endl;
    }

    return 0;
}