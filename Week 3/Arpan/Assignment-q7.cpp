#include <iostream>
using namespace std;

void removeCharacter(string& str, char ch) {
    int index = 0;
    
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] != ch) {
            str[index++] = str[i];
        }
    }
    str.resize(index); 
}

int main() {
    string str;
    char ch;
    
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter the character to remove: ";
    cin >> ch;

    removeCharacter(str, ch);

    cout << "String after removing all occurrences of '" << ch << "': " << str << endl;

    return 0;
}
