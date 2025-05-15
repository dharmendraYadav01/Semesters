#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cerr << "Error: Number of elements must be a positive integer." << endl;
        return -1;
    }

    int *arr = new int[n];
    if (!arr) {
        cerr << "Error: Memory allocation failed." << endl;
        return -1;
    }

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        if (!(cin >> arr[i])) {
            cerr << "Error: Invalid input. Please enter integers only." << endl;
            delete[] arr;
            return -1;
        }
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}