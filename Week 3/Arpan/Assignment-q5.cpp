#include <iostream>
using namespace std;

void removeDuplicates(int arr[], int n, int newArr[], int& newSize) {
    newSize = 0;

    for (int i = 0; i < n; ++i) {
        bool isDuplicate = false;
        for (int j = 0; j < newSize; ++j) {
            if (arr[i] == newArr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            newArr[newSize++] = arr[i];
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int newArr[n];
    int newSize;
    removeDuplicates(arr, n, newArr, newSize);

    cout << "Array after removing duplicates: ";
    printArray(newArr, newSize);

    return 0;
}
