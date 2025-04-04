#include <iostream>
using namespace std;

void pattern(int n) {
    int num = 1;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n + i - 1; j++) { 
            cout << num++;
            if (j < n + i - 2) cout << "*";
        }
        cout << endl;
        num = num - (n + i - 1) + i; // Adjust number for next row
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    pattern(n);
    
    return 0;
}

