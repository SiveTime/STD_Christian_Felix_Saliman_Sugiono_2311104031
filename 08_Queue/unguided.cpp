#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string NIM;
    Mahasiswa* next;
};

Mahasiswa* front = nullptr;
Mahasiswa* back = nullptr;

bool isEmpty() {
    return front == nullptr;
}

void enqueueAntrian(string nama, string NIM) {
    Mahasiswa* newNode = new Mahasiswa();
    newNode->nama = nama;
    newNode->NIM = NIM;
    newNode->next = nullptr;

    if (isEmpty()) {
        front = back = newNode;
    } else if (newNode->NIM < front->NIM) { 
        newNode->next = front;
        front = newNode;
    } else {
        Mahasiswa* temp = front;
        while (temp->next != nullptr && temp->next->NIM < newNode->NIM) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        if (newNode->next == nullptr) {
            back = newNode;
        }
    }
}

void dequeueAntrian() {
    if (isEmpty()) {
        cout << "Antrian kosong brow" << endl;
    } else {
        Mahasiswa* temp = front;
        front = front->next;
        delete temp;
        if (front == nullptr) {
            back = nullptr;
        }
    }
}

int countQueue() {
    int count = 0;
    Mahasiswa* temp = front;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

void clearQueue() {
    while (!isEmpty()) {
        dequeueAntrian();
    }
    cout << "Antrean dikosongkan." << endl;
}

void viewQueue() {
    if (isEmpty()) {
        cout << "Data antrian teller: kosong" << endl;
    } else {
        cout << "Data antrian teller:" << endl;
        Mahasiswa* temp = front;
        int index = 1;
        while (temp != nullptr) {
            cout << index++ << ". Nama: " << temp->nama << ", NIM: " << temp->NIM << endl;
            temp = temp->next;
        }
    }
}

int main() {
    int choice;
    string nama, NIM;

    do {
        cout << "\n1. Tambah Antrian\n2. Hapus Antrian\n3. Lihat Antrian\n4. Bersihkan Antrian\n5. Keluar\n";
        cout << "Pilih opsi: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan Nama Mahasiswa: ";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan NIM Mahasiswa: ";
                cin >> NIM;
                enqueueAntrian(nama, NIM);
                break;
            case 2:
                dequeueAntrian();
                break;
            case 3:
                viewQueue();
                cout << "Jumlah antrian = " << countQueue() << endl;
                break;
            case 4:
                clearQueue();
                break;
            case 5:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Opsi tidak valid. Silakan coba lagi." << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
