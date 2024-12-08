#include <iostream>
#include <string>

using namespace std;

struct Node {
    int nim;
    string nama;
    Node* next;
};

void tambahMahasiswa_2311104031(Node*& head, int nim, string nama) {
    Node* newNode = new Node();
    newNode->nim = nim;
    newNode->nama = nama;
    newNode->next = nullptr;

    if (head == nullptr) {

        head = newNode;
    } else {

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void cariMahasiswa_2311104031(Node* head, int nimDicari) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->nim == nimDicari) {

            cout << "Mahasiswa dengan NIM " << nimDicari << " ditemukan: " << temp->nama << endl;
            return;
        }
        temp = temp->next;
    }

    cout << "Mahasiswa dengan NIM " << nimDicari << " tidak ditemukan" << endl;
}

void tampilkanMahasiswa_2311104031(Node* head) {
    if (head == nullptr) {
        cout << "Tidak ada data mahasiswa." << endl;
        return;
    }

    Node* temp = head;
    while (temp != nullptr) {
        cout << "NIM: " << temp->nim << ", Nama: " << temp->nama << endl;
        temp = temp->next;
    }
}

int main() {
    Node* head = nullptr;

    tambahMahasiswa_2311104031(head, 23115, "Sarkonus Digimon");
    tambahMahasiswa_2311104031(head, 23120, "Daedulus Strong Arm");
    tambahMahasiswa_2311104031(head, 23130, "Sheldon Plankton");

    cout << "Daftar mahasiswa:" << endl;
    tampilkanMahasiswa_2311104031(head);

    int nimCari;
    cout << "\nMasukkan NIM yang ingin dicari: ";
    cin >> nimCari;
    cariMahasiswa_2311104031(head, nimCari);

    return 0;
}
