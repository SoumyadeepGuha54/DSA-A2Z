#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for(int j = i; j < n; j++) {
            if(arr[j] < arr[minIndex]) minIndex = j;
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {23, 12, 56, 45, 34};
    selectionSort(arr, 5);
    for(int i = 0; i < 5; i++) cout << arr[i] << " ";
    return 0;
}