#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void tambahElemen_2311104031(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
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

void searchElement_2311104031(Node* head, int value) {
    Node* current = head;
    int position = 1;
    
    while (current != nullptr) {
        if (current->data == value) {
            cout << "Elemen " << value << " ditemukan di alamat " << current << " pada urutan ke " << position << endl;
            return;
        }
        current = current->next;
        position++;
    }
    cout << "Elemen " << value << " tidak ditemukan dalam list." << endl;
}

void showElement_2311104031(Node* head) {
    Node* current = head;
    cout << "Elemen-elemen dalam list: ";
    if (current == nullptr) {
        cout << "List kosong." << endl;
        return;
    }

    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int elements[] = {10, 20, 30, 40, 50, 60};
    
    for (int i = 0; i < 6; i++) {
        tambahElemen_2311104031(head, elements[i]);
    }

    showElement_2311104031(head);

    int cari;
    cout << "Masukkan elemen yang ingin dicari: ";
    cin >> cari;

    searchElement_2311104031(head, cari);

    return 0;
}
