#include "list.h"

void createList(List &L) {
    L.first = nullptr;
}

address allocate(infotype x) {
    address P = new ElmtList;
    P->info = x;
    P->next = nullptr;
    return P;
}

void deallocate(address P) {
    delete P;
}

void insertFirst(List &L, address P) {
    P->next = L.first;
    L.first = P;
}

void insertLast(List &L, address P) {
    if (L.first == nullptr) {
        insertFirst(L, P);
    } else {
        address last = L.first;
        while (last->next != nullptr) {
            last = last->next;
        }
        last->next = P;
    }
}
void printInfo(List L) {
    address P = L.first;
    while (P != nullptr) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}
