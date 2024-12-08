#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    char jenis_kelamin;
    float ipk;
};

typedef Mahasiswa infotype;
typedef struct ElmList *address;

struct ElmList {
    infotype info;
    address next;
};

struct list {
    address first;
};

void createList(list &L){
    L.first = nullptr;
}

address allocate(infotype data){
    address P = new ElmList;
    P->info = data;
    P->next = nullptr;
    return P;
}

void insertFirst(list &L, address P){
    if (L.first == nullptr){
        L.first = P;
    }else{
        P->next = L.first;
        L.first = P;
    }
}

void insertLast(list &L, address P){
    if (L.first == nullptr){
        L.first = P;
    }else{
        address Q = L.first;
        while (Q->next != nullptr){
            Q = Q->next;
        }
        Q->next = P;
    }
}

void insertAfter(address prec, address P){
    if (prec != nullptr){
        P->next = prec->next;
        prec->next = P;
    }
}

void printList(const list &L){
    address P = L.first;
    while (P != nullptr){
        cout << "Nama: " << P->info.nama << endl;
        cout << "NIM: " << P->info.nim << endl;
        cout << "Kelamin: " << P->info.jenis_kelamin << endl;
        cout << "IPK: " << P->info.ipk << endl;
        cout << endl;
        P = P->next;
    }
}

int main(){
    list L;
    createList(L);

    infotype m1 = {"Ali", "01", 'L', 3.3};
    infotype m2 = {"Bobby", "02", 'L', 3.71};
    infotype m3 = {"Cindy", "03", 'P', 3.5};
    infotype m4 = {"Danu", "04", 'L', 4.0};
    infotype m5 = {"Ely", "05", 'P', 3.4};
    infotype m6 = {"Maulana", "06", 'P', 3.45};

    address p1 = allocate(m1);
    address p2 = allocate(m2);
    address p3 = allocate(m3);
    address p4 = allocate(m4);
    address p5 = allocate(m5);
    address p6 = allocate(m6);

    insertFirst(L, p1);
    insertLast(L, p2);
    insertLast(L, p4);
    insertAfter(p2, p3);
    insertLast(L, p5);
    insertLast(L, p6);

    cout << "Coba insert first last dan after\n" << endl;
    printList(L);

    return 0;
}