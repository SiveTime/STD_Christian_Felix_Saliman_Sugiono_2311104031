#include <iostream>
using namespace std;

string arrayBuku[5];
int maksimal = 5, top = 0;

bool isFull(){
    return top == maksimal;
}

bool isEmpty (){
    return top == 0;
}

void pushArrayBuku (string data){
    if (isFull()){
        cout<< "Data telah penuh"<<endl;
    }else{
        arrayBuku[top] = data;
        top++;
    }
}

void popArrayBuku(){
    if (isEmpty()) {
        cout<< "Tidak ada buku dalam list"<<endl;
    }else{
        arrayBuku[top-1] = "";
        top--;
    }
}

void peekArrayBuku(int posisi){
    if(isEmpty()){
        cout<<"tidak ada buku dalam rak"<<endl;
    }else{
        int index = top - posisi;
        if (index >= 0 && index < top){
            cout<<"Posisi ke"<<posisi<<" adalah "<<arrayBuku[index]<<endl;
        }else{
            cout<<"posisi diluar jangkauan"<<endl;
        }
    }
}

int countStack(){
    return top;
}

void changeArrayBuku(int posisi, string data){
    int index = top - posisi;
    if (index >= 0 && index < top){
        arrayBuku[index] = data;
    }else{
        cout<<"posisi lebih dari kapasitas"<< endl;
    }
}

void destroyArrayBuku(){
    for (int i = top - 1; i >= 0; i--){
        arrayBuku[i]="";
    }
    top = 0;
}

void cetakArrayBuku(){
    if (isEmpty()){
        cout<<"tidak ada buku dalam rak"<<endl;
    } else {
        for (int i = top - 1; i>=0; i--){
            cout<<arrayBuku[i]<<endl;
        }
    }
}

int main(){
    pushArrayBuku ("Kalkulus");
    pushArrayBuku ("Struktur data");
    pushArrayBuku ("Matematika Diskrit");
    pushArrayBuku ("The way of charizma");
    pushArrayBuku ("Dany Gonzales and his balls");

    cetakArrayBuku();
    cout<<" \n "<<endl;

    cout<< "Apakah stack penuh "<< (isFull() ? "ya" : "tidak")<< endl;
    cout<< "Apakah stack kosong "<< (isEmpty() ? "ya" : "tidak")<< endl;

    peekArrayBuku(2);
    popArrayBuku();

    cout<<"Banyak buku dalam rak: "<< countStack() << endl;
    changeArrayBuku(2, "Hail Hitler");
    cetakArrayBuku();
    cout<< "\n" << endl;

    destroyArrayBuku();
    cout<<"Top setelah destroy: "<<top<<endl;
    cetakArrayBuku();

    return 0;
}