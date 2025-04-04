#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    // Check for valid input (positive side lengths)
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Side lengths must be positive numbers.";
        return 0;  // Exit the program if the sides are not valid
    }

    if (a + b > c && b + c > a && c + a > b) {
        if (a == b && b == c) 
            cout << "Equilateral triangle";
        else if (a == b || b == c || a == c) 
            cout << "Isosceles triangle";
        else 
            cout << "Scalene triangle";
    } else {
        cout << "Not a valid triangle";
    }

    return 0;
}
