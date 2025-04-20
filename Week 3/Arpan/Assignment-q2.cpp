#include <iostream>
using namespace std;

void countCharacters(const string& str) {
    int alphabets = 0, digits = 0, specialChars = 0;

    for (char ch : str) {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            alphabets++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else {
            specialChars++;
        }
    }

    cout << "Alphabets: " << alphabets << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special characters: " << specialChars << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    countCharacters(str);

    return 0;
}
