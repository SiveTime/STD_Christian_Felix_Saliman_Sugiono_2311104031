/*Nomor 1*/
/*#include <iostream>
#include <stdio.h>
using namespace std;
int main () {
    float angka1, angka2;
    cout << "masukan angka pertama: ";
    cin >> angka1;
    cout << "masukan angka keduda: ";
    cin >> angka2;
    cout << "hasil penambahan: " << angka1+angka2 << endl;
    cout << "hasil pengurangan: " << angka1-angka2 <<endl;
    cout << "hasil pengalian: " << angka1*angka2 << endl;
    if (angka2 != 0) {
        cout << "hasil pembagian: " << angka1/angka2 << endl;
    }else {
        cout << "ngga bisa bagi sama 0 bang coba angka lain";
    }
    return 0;
}*/

/*Nomor 2*/
/*#include <iostream>
using namespace std;
string AngkaToText(int angka) {
    string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
    string belasan[] = {"sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas",
                        "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};
    string puluhan[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh",
                        "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};
    if (angka == 0) {
        return "nol";
    } else if (angka == 100) {
        return "seratus";
    } else if (angka < 10) {
        return satuan[angka];
    } else if (angka < 20) {
        return belasan[angka - 10];
    } else {
        int puluhanIndex = angka / 10;
        int satuanIndex = angka % 10;
        if (satuanIndex == 0) {
            return puluhan[puluhanIndex];
        } else {
            return puluhan[puluhanIndex] + " " + satuan[satuanIndex];
        }
    }
}

int main() {
    int angka;
    cout << "Masukkan angka (0-100): ";
    cin >> angka;
    if (angka < 0 || angka > 100) {
        cout << "Mohon maaf angka anda tidak ada dalam pilihan mohon pilih ulang dari 1-100" << endl;
    } else {
        cout << "Angka dalam tulisan: " << convertToText(angka) << endl;
    }
    return 0;
}*/

/*nomor 3*/

/*#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Masukan angka yang anda inginkan: ";
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << "* ";
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "* " << endl;
    return 0;
}*/
