#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

void reverseWords(string sentence) {
    stack<string> S;
    stringstream ss(sentence);
    string word;

    while (ss >> word) {
        reverse(word.begin(), word.end());
        S.push(word);
    }

    cout << "Hasil: ";

    while (!S.empty()) {
        cout << S.top() << " ";
        S.pop();
    }
    cout << endl;
}

int main() {
    string input;

    cout << "Masukkan kalimat dengan minimal 3 kata: ";
    getline(cin, input);

    reverseWords(input);

    return 0;
}
