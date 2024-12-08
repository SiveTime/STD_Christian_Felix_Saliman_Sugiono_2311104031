#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertSorted_2311104031(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr || head->data >= value) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr && current->next->data < value) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

void tampilkanList_2311104031(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int elements[] = {1, 3, 5, 7};

    for (int i = 0; i < 4; i++) {
        insertSorted_2311104031(head, elements[i]);
    }

    cout << "List sebelum penambahan: ";
    tampilkanList_2311104031(head);

    int newElement;
    cout << "Masukkan elemen baru yang ingin ditambahkan: ";
    cin >> newElement;

    insertSorted_2311104031(head, newElement);

    cout << "List setelah penambahan: ";
    tampilkanList_2311104031(head);

    return 0;
}
