#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void insertFront(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    void insertBack(int value) {
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

    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr) {
                cout << " -> ";
            }
            temp = temp->next;
        }
        cout << endl;
    }

    void deleteNode(int value) {
        if (head == nullptr) {
            cout << "List kosong." << endl;
            return;
        }

        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr && temp->next->data != value) {
            temp = temp->next;
        }

        if (temp->next == nullptr) {
            cout << "Node dengan nilai " << value << " tidak ditemukan." << endl;
            return;
        }

        Node* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        delete nodeToDelete;
    }
};

int main() {
    LinkedList list;

    list.insertFront(10);
    list.insertBack(20);
    list.insertFront(5);

    list.deleteNode(10);
    cout << "Linked List setelah penghapusan: ";
    list.printList();  // Output: 5 -> 20

    return 0;
}