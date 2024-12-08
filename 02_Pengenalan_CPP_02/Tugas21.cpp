#include <iostream>
using namespace std;
struct Elemen {
    int data;
    Elemen* next;
};
typedef Elemen* adr;
typedef int infotype;
struct List {
    adr first;
};
// Function untuk membuat list kosong
void Create_List(List &L) {
    L.first = NULL;
}
// Function untuk membuat elemen baru
adr New_Elemen(infotype data) {
    adr p = new Elemen;
    p->data = data;
    p->next = NULL;
    return p;
}
// Procedure untuk menambahkan elemen di awal list
void Insert_First(List &L, adr p) {
    p->next = L.first;
    L.first = p;
}
// Procedure untuk menambahkan elemen di akhir list
void Insert_Last(List &L, adr p) {
    if (L.first == NULL) {
        L.first = p;
    } else {
        adr last = L.first;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = p;
    }
}
// Procedure untuk menambahkan elemen setelah elemen tertentu
void Insert_After(List &L, adr prec, adr p) {
    if (prec != NULL) {
        p->next = prec->next;
        prec->next = p;
    }
}
// Procedure untuk menghapus elemen pertama dari list
void Delete_First(List &L, adr &p) {
    if (L.first != NULL) {
        p = L.first;
        L.first = L.first->next;
        p->next = NULL;
    } else {
        p = NULL;
    }
}
// Procedure untuk menghapus elemen terakhir dari list
void Delete_Last(List &L, adr &p) {
    if (L.first != NULL) {
        if (L.first->next == NULL) {
            p = L.first;
            L.first = NULL;
        } else {
            adr prev = NULL;
            p = L.first;
            while (p->next != NULL) {
                prev = p;
                p = p->next;
            }
            prev->next = NULL;
        }
    } else {
        p = NULL;
    }
}
// Procedure untuk menghapus elemen setelah elemen tertentu
void Delete_After(List &L, adr prec, adr &p) {
    if (prec != NULL && prec->next != NULL) {
        p = prec->next;
        prec->next = p->next;
        p->next = NULL;
    }
}
// Procedure untuk menampilkan isi list
void Show(List L) {
    if (L.first == NULL) {
        cout << "List kosong" << endl;
    } else {
        adr p = L.first;
        while (p != NULL) {
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
    }
}
int main() {
    List L;
    adr p, q;
    Create_List(L);
    // Insert some elements
    p = New_Elemen(50);
    Insert_First(L, p);
    p = New_Elemen(70);
    Insert_Last(L, p);
    p = New_Elemen(90);
    Insert_Last(L, p);
    cout << "Isi List setelah insert: ";
    Show(L);
    // Delete first element
    Delete_First(L, p);
    cout << "Isi List setelah delete first: ";
    Show(L);
    // Delete last element
    Delete_Last(L, p);
    cout << "Isi List setelah delete last: ";
    Show(L);
    return 0;
}