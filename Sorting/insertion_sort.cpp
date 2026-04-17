#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int j = i;
        while(j > 0 && arr[j - 1] > arr[j]) {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
}

int main() {
    int arr[] = {23, 12, 56, 45, 34};
    insertionSort(arr, 5);
    for(int i = 0; i < 5; i++) cout << arr[i] << " ";
    return 0;
}