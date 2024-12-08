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

void tampilkanList_2311104031(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void bubbleSortList_2311104031(Node*& head) {
    if (head == nullptr) return;
    
    bool swapped;
    do {
        swapped = false;
        Node* current = head;

        while (current->next != nullptr) {
            if (current->data > current->next->data) {
                swap(current->data, current->next->data);
                swapped = true;
            }
            current = current->next;
        }
    } while (swapped);
}

int main() {
    Node* head = nullptr;
    int elements[] = {5, 3, 8, 2, 7};

    for (int i = 0; i < 5; i++) {
        tambahElemen_2311104031(head, elements[i]);
    }

    cout << "List sebelum diurutkan: ";
    tampilkanList_2311104031(head);

    bubbleSortList_2311104031(head);

    cout << "List setelah diurutkan: ";
    tampilkanList_2311104031(head);

    return 0;
}
