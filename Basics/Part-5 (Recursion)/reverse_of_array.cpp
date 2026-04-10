#include <bits/stdc++.h>
using namespace std;

void rev_arr_v1(int arr[], int left, int right)
{
    if(left >= right) return;
    swap(arr[left], arr[right]);
    rev_arr_v1(arr, left + 1, right - 1);
}

void rev_arr_v2(int arr[], int n, int i)
{
    if(i >= n / 2) return;
    swap(arr[i], arr[n - i - 1]);
    rev_arr_v2(arr, n, i + 1);
}

int main()
{
    int arr[] = {12, 23, 34, 45, 56};
    rev_arr_v1(arr, 0, 4);
    for(int i = 0; i < 5; i++) cout << arr[i] << " ";
    cout << endl;
    rev_arr_v2(arr, 5, 0);
    for(int i = 0; i < 5; i++) cout << arr[i] << " ";
    return 0;
}