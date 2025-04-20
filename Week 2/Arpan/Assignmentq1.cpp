#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter number of elements in first array: ";
    cin >> n1;
    vector<int> array1(n1);
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; ++i) {
        cin >> array1[i];
    }

    cout << "Enter number of elements in second array: ";
    cin >> n2;
    vector<int> array2(n2);
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; ++i) {
        cin >> array2[i];
    }

    vector<int> mergedArray = array1;
    mergedArray.insert(mergedArray.end(), array2.begin(), array2.end());

    cout << "Merged array in reverse order: ";
    for (int i = mergedArray.size() - 1; i >= 0; --i) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}