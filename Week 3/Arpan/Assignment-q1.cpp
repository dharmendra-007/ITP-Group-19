#include <iostream>
using namespace std;

void moveNegativeElements(int arr[], int n) {
    int left = 0, right = n - 1;

    while (left <= right) {
        if (arr[left] < 0 && arr[right] >= 0) {
            left++;
            right--;
        } else if (arr[left] >= 0 && arr[right] < 0) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        } else if (arr[left] >= 0) {
            left++;
        } else {
            right--;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    moveNegativeElements(arr, n);
    
    cout << "Array after moving negative elements to one side: ";
    printArray(arr, n);

    return 0;
}
