#include <iostream>
#include <list>
#include <string>
using namespace std;
// Fungsi untuk menampilkan isi list
void showList(list<string> myList) {
    cout << "Data di dalam list: ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    // Deklarasi variable List (nama variabel menggunakan huruf pertama dan huruf terakhir nama lengkap)
    list<string> myList;
    // eminta user data pertama yang akan dimasukkan ke list
    string data1;
    cout << "Masukkan data pertama: ";
    getline(cin, data1);
    // Melakukan insert dengan menggunakan push_front (Insert First)
    myList.push_front(data1);
    // Meminta user data kedua yang akan dimasukkan ke list
    string data2;
    cout << "Masukkan data kedua: ";
    getline(cin, data2);
    // Melakukan insert dengan menggunakan push_back (Insert Last)
    myList.push_back(data2);
    // Meminta user data ketiga yang akan dimasukkan ke list
    string data3;
    cout << "Masukkan data ketiga: ";
    getline(cin, data3);
    // Melakukan insert dengan menggunakan insert pada posisi kedua (setelah elemen pertama)
    auto it = myList.begin();
    ++it; // menggeser iterator ke posisi kedua
    myList.insert(it, data3);
    // Meminta user data keempat yang akan dimasukkan ke list
    string data4;
    cout << "Masukkan data keempat: ";
    getline(cin, data4);
    // Melakukan insert dengan menggunakan push_back (Insert Last)
    myList.push_back(data4);
    // Memanggil show untuk menampilkan data dalam list
    showList(myList);
    // Melakukan penghapusan data dengan memanfaatkan delete by value
    string deleteData1;
    cout << "Masukkan data yang ingin dihapus (delete by value): ";
    getline(cin, deleteData1);
    myList.remove(deleteData1);
    // Memanggil show setelah penghapusan pertama
    showList(myList);
    // Melakukan penghapusan data dengan memanfaatkan delete by index
    int deleteIndex;
    cout << "Masukkan index data yang ingin dihapus (delete by index): ";
    cin >> deleteIndex;
    it = myList.begin();
    advance(it, deleteIndex); // memindahkan iterator ke posisi yang diinginkan
    myList.erase(it);
    // Memanggil show setelah penghapusan kedua
    showList(myList);

    return 0;
}