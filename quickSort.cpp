#include <iostream>
using namespace std;

// Quick Sort Partition
int partition(int arr[], int low, int high) {
    int pivot = arr[high];     // last element as pivot
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Quick Sort Function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Binary Search Function
bool binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return true;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}

int main() {

    int A[] = {301, 345, 234};
    int B[] = {357, 301, 234, 654, 234, 456};

    int nA = 3;
    int nB = 6;

    // Sort both arrays
    quickSort(A, 0, nA - 1);
    quickSort(B, 0, nB - 1);

    cout << "Sorted Store A: ";
    for (int i = 0; i < nA; i++)
        cout << A[i] << " ";

    cout << "\nSorted Store B: ";
    for (int i = 0; i < nB; i++)
        cout << B[i] << " ";

    // Find common IDs (print once)
    cout << "\nCommon Product IDs: ";

    for (int i = 0; i < nA; i++) {

        // skip duplicate in A
        if (i > 0 && A[i] == A[i - 1])
            continue;

        if (binarySearch(B, nB, A[i]))
            cout << A[i] << " ";
    }

    return 0;
}