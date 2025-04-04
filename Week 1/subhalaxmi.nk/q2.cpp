#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if(a + b > c && b + c > a && c + a > b) {
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
