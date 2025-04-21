#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int maxCount = 0;
    int maxElement = arr[0];

    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    cout << "Maximum occurring integer: " << maxElement << endl;
    cout << "It occurred " << maxCount << " times." << endl;

    return 0;
}
