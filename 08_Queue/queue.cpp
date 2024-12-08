#include <iostream>
using namespace std;

const int MAX = 5;
int head = -1;
int tail = -1;
int antrian[MAX];

bool isEmpty(){
    return (tail == -1 && head == -1);
}

bool isFull(){
    return (tail == MAX - 1);
}

void enqueue(int value){
    if (isFull()){
        cout << "Antrian sudah penuh" << endl;
    }else{
        if (isEmpty()){
            head = 0;
        }
        tail++;
        antrian[tail] = value;
        cout << "Data " << value << " masuk antrian" << endl;
    }
}

int main(){
    cout << "Oy yarou" << endl;
    cout << "Apakah antrian kosong? " << (isEmpty() ? "Ya" : "Tidak") << endl;

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);

    return 0;
}