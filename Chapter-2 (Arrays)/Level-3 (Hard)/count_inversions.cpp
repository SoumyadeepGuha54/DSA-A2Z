#include <bits/stdc++.h>
using namespace std;

int merge(int arr[], int low, int mid, int high) {
    int cnt = 0;
    int i = low, j = mid + 1, k = 0;
    int temp[high - low + 1];
    while(i <= mid && j <= high) {
        if(arr[i] < arr[j]) temp[k++] = arr[i++];
        else {
            temp[k++] = arr[j++];
            cnt += mid - i + 1;
        }
    }
    while(i <= mid) temp[k++] = arr[i++];
    while(j <= high) temp[k++] = arr[j++];
    for(i = 0; i < high - low + 1; i++) arr[low + i] = temp[i];
    return cnt;
}

int mergeSort(int arr[], int low, int high) {
    int cnt = 0;
    if(low < high) {
        int mid = (low + high) / 2;
        cnt += mergeSort(arr, low, mid);
        cnt += mergeSort(arr, mid + 1, high);
        cnt += merge(arr, low, mid, high);
    }
    return cnt;
}

int main() {
    int v[] = {5, 3, 2, 1, 4};
    cout << mergeSort(v, 0, 4);
    return 0;
}