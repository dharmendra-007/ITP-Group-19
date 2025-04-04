#include<iostream>
using namespace std;

void convertToBinary(int num) {
    string binary = "";
    while (num > 0) {
        binary = char(num % 2 + '0') + binary;
        num /= 2;
    }
    cout << "Binary: " << binary << endl;
}

void convertToOctal(int num) {
    string octal = "";
    while (num > 0) {
        octal = char(num % 8 + '0') + octal;
        num /= 8;
    }
    cout << "Octal: " << octal << endl;
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    
    convertToBinary(num);
    convertToOctal(num);
    
    return 0;
}
