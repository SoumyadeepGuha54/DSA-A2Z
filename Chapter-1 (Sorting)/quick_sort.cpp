#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high) {
    int i = low + 1, j = high;
    int pivot = arr[low];
    do {
        while(arr[i] <= pivot) i++;
        while(arr[j] > pivot) j--;
        if(i < j) swap(arr[i], arr[j]);
    } while(i < j);
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high) {
    if(low < high) {
        int p = partition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

int main() {
    int arr[] = {23, 12, 56, 45, 34};
    quickSort(arr, 0, 5);
    for(int i = 0; i < 5; i++) cout << arr[i] << " ";
    return 0;
}