#include <iostream>
using namespace std;

void rotateArray(int arr[], int n, int k) {
    k = k % n;
    int temp[k];

    for (int i = 0; i < k; ++i) {
        temp[i] = arr[n - k + i];
    }

    for (int i = n - 1; i >= k; --i) {
        arr[i] = arr[i - k];
    }

    for (int i = 0; i < k; ++i) {
        arr[i] = temp[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the number of positions to rotate: ";
    cin >> k;

    rotateArray(arr, n, k);

    cout << "Array after rotation: ";
    printArray(arr, n);

    return 0;
}
