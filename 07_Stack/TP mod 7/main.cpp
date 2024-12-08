// main.cpp
#include <iostream>
#include "stack.h"
using namespace std;

void testStack(int nimLastDigitMod4) {
    stack S;
    createStack(S);

    if (nimLastDigitMod4 == 0) {
        char items[] = {'I', 'F', 'L', 'A', 'B', 'J', 'A', 'Y', 'A'};
        for (char item : items) push(S, item);
    } else if (nimLastDigitMod4 == 1) {
        char items[] = {'H', 'A', 'L', 'O', 'B', 'A', 'N', 'D', 'U', 'N', 'G'};
        for (char item : items) push(S, item);
    } else if (nimLastDigitMod4 == 2) {
        char items[] = {'P', 'E', 'R', 'C', 'A', 'Y', 'A', 'D', 'I', 'R', 'I'};
        for (char item : items) push(S, item);
    } else {
        char items[] = {'S', 'T', 'R', 'U', 'K', 'T', 'U', 'R', 'D', 'A', 'T', 'A'};
        for (char item : items) push(S, item);
    }

    cout << "Isi stack awal: ";
    printInfo(S);

    while (S.Top > 4) pop(S);

    cout << "Isi stack sesudah pop: ";
    printInfo(S);
}

int main() {
    int nimLastDigitMod4 = 2;
    testStack(nimLastDigitMod4);
    return 0;
}
