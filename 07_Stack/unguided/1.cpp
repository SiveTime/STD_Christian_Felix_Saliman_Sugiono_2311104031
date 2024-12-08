#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isPalindrome(string str) {
    stack<char> S;
    string cleanedStr = "";

    for (char c : str) {
        if (c != ' ') {
            cleanedStr += tolower(c);
        }
    }

    for (char c : cleanedStr) {
        S.push(c);
    }

    for (char c : cleanedStr) {
        if (c != S.top()) {
            return false;
        }
        S.pop();
    }

    return true;
}

int main() {
    string input;

    cout << "Masukkan kalimat: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "Kalimat tersebut adalah Palindrom" << endl;
    } else {
        cout << "Kalimat tersebut adalah bukan Palindrom" << endl;
    }

    return 0;
}
