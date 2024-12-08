#include <iostream>
#include <string>

using namespace std;

struct Node {
    int idBuku;
    string judulBuku;
    string penulisBuku;
    Node* prev;
    Node* next;
};

Node* createNode_2311104031(int id, string judul, string penulis) {
    Node* newNode = new Node();
    newNode->idBuku = id;
    newNode->judulBuku = judul;
    newNode->penulisBuku = penulis;
    newNode->prev = nullptr;
    newNode->next = nullptr;
    return newNode;
}

void tambahBuku_2311104031(Node*& head, int id, string judul, string penulis) {
    Node* newNode = createNode_2311104031(id, judul, penulis);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    cout << "Buku berhasil ditambahkan!" << endl;
}

void tampilkanDariAwal_2311104031(Node* head) {
    if (head == nullptr) {
        cout << "Daftar buku kosong." << endl;
        return;
    }
    
    Node* temp = head;
    cout << "Daftar Buku (Dari Awal ke Akhir):" << endl;
    while (temp != nullptr) {
        cout << "ID Buku: " << temp->idBuku << ", Judul Buku: " << temp->judulBuku 
             << ", Penulis: " << temp->penulisBuku << endl;
        temp = temp->next;
    }
}

void tampilkanDariAkhir_2311104031(Node* head) {
    if (head == nullptr) {
        cout << "Daftar buku kosong." << endl;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    cout << "Daftar Buku (Dari Akhir ke Awal):" << endl;
    while (temp != nullptr) {
        cout << "ID Buku: " << temp->idBuku << ", Judul Buku: " << temp->judulBuku 
             << ", Penulis: " << temp->penulisBuku << endl;
        temp = temp->prev;
    }
}

int main() {
    Node* head = nullptr;
    int pilihan, id;
    string judul, penulis;

    do {
        cout << "\nMenu: " << endl;
        cout << "1. Tambah Buku" << endl;
        cout << "2. Tampilkan Daftar Buku (Awal ke Akhir)" << endl;
        cout << "3. Tampilkan Daftar Buku (Akhir ke Awal)" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih opsi: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan ID Buku: ";
                cin >> id;
                cin.ignore();
                cout << "Masukkan Judul Buku: ";
                getline(cin, judul);
                cout << "Masukkan Penulis Buku: ";
                getline(cin, penulis);
                tambahBuku_2311104031(head, id, judul, penulis);
                break;
            case 2:
                tampilkanDariAwal_2311104031(head);
                break;
            case 3:
                tampilkanDariAkhir_2311104031(head);
                break;
            case 4:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    } while (pilihan != 4);

    return 0;
}
