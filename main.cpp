#include <iostream>
using namespace std;

int main() {

    string palindrome, palindrome1;

    cout << "Enter a word: ";
    cin >> palindrome;

    for (int i = palindrome.length() - 1; i >= 0; i--) {
        palindrome1 += palindrome[i];
        cout << palindrome[i] << endl;
    }

    if (palindrome == palindrome1) {
        cout << endl << "The word " << palindrome1 << " is a palindrome." << endl;
    }
    else {
        cout << endl << "The word " << palindrome << " is not a palindrome." << endl;
    }
}
