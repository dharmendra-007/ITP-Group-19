#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;

    if (n < 2) {
        cout << "Array must contain at least two elements." << endl;
        return 1;
    }

    int arr[n];
    cout << "Enter " << n << " distinct elements: ";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int smallest, secondSmallest;

    if (arr[0] < arr[1]) {
        smallest = arr[0];
        secondSmallest = arr[1];
    } else {
        smallest = arr[1];
        secondSmallest = arr[0];
    }

    for (int i = 2; i < n; ++i) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }
    }

    cout << "Second smallest element is: " << secondSmallest << endl;

    return 0;
}
