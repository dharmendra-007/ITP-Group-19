#include <iostream>
using namespace std;

int main() {
    int num, dig, max = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        dig = num % 10;
        if (max < dig) {
            max = dig;
        }
        num /= 10;
    }

    cout << "The largest digit in the number is: " << max << endl;
    
    return 0;
}
