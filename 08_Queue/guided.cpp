#include <iostream>
using namespace std;

const int makssimalQueue = 5;
int front = 0;
int back = 0;
string queueTeller[5];

bool isFull(){
    if (back == makssimalQueue){
        return true;
    }else{
        return false;
    }
}

bool isEmpty(){
    if (back == 0){
        return true;
    }else{
        return false;
    }
}

void enqueueAntrian(string data){
    if (isFull()){
        cout<<"Antrian Penuh uhuy"<<endl;
    }else{
        if (isEmpty()){
            queueTeller[0]= data;
            front++;
            back++;
        }else{
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian(){
    if (isEmpty()){
        cout<<"Antrian kosong brow"<<endl;
    }else{
        for (int i = 0; i <back - 1; i++){
            queueTeller[i] = queueTeller[i + 1];
        }
        queueTeller[back - 1] = "";
        back--;
    }
}

int countQueue(){
    return back;
}

void clearQueue(){
    if(isEmpty()){
        cout<<"kosong brow ga ono isi"<<endl;
    }else{
        for (int i = 0; i < back; i++){
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue (){
    cout<<"Data antrian teller: "<<endl;
    for (int i = 0; i < makssimalQueue; i++){
        if (queueTeller [i] != ""){
            cout<<i+1<<". "<<queueTeller[i]<<endl;
        }else{
            cout<< i+1 << ". (kosong)"<<endl;
        }
    }
}

int main(){
    enqueueAntrian("Yardeez");
    enqueueAntrian("Skellytron");
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() <<endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() <<endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " <<countQueue() <<endl;
    return 0;
}