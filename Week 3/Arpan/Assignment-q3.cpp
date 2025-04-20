#include <iostream>
using namespace std;

void removeNonAlphabets(string& str) {
    int index = 0;
    
    for (int i = 0; i < str.length(); i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            str[index++] = str[i];
        }
    }
    str.resize(index); 
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    removeNonAlphabets(str);

    cout << "String after removing non-alphabets: " << str << endl;

    return 0;
}
