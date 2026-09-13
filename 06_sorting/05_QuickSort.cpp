#include <bits/stdc++.h>
using namespace std;

void quickSort(int arr[], int low, int high) {
    if (low >= high)
        return;

    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // Place pivot in its correct position
    swap(arr[i + 1], arr[high]);

    int pivotIndex = i + 1;

    // Sort left and right parts
    quickSort(arr, low, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, high);
}

void partition(int arr[], int n) {
    quickSort(arr, 0, n - 1);
}

int main() {
    int arr[] = {5, 2, 8, 1, 3};
    int n = 5;

    partition(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}