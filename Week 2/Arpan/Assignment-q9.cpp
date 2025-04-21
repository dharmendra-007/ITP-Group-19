#include <iostream>
using namespace std;

void printArray(int arr[], int n, int index = 0) {
    if (index == n) {
        return;
    }
    cout << arr[index] << " ";
    printArray(arr, n, index + 1);
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

    cout << "Array elements are: ";
    printArray(arr, n);
    cout << endl;

    return 0;
}
