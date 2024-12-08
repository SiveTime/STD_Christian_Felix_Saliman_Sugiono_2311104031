#include "list.h"
int main() {
    List L;
    createList(L);

    int nim[] = {4, 2, 5};

    for (int i = 0; i < 3; i++) {
        address P = allocate(nim[i]);
        insertFirst(L, P);
    }

    cout << "Isi dari Single Linked List: ";
    printInfo(L);

    return 0;
}
