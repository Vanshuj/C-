// 11.  WAP to implement switch case to detect input vowel or not
#include <iostream>
#include <cctype>  

using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    
    ch = tolower(ch);

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << ch << " is a vowel." << endl;
            break;
        default:
            cout << ch << " is not a vowel." << endl;
    }

    return 0;
}