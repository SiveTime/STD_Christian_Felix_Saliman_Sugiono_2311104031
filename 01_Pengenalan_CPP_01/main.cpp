/*ouput dengan cout contoh 1*/
/*#include <iostream>
using namespace std;
int main(){
    cout << "Belajar bahasa C++" << endl;
    return 0;
}*/

/*Contoh 2*/
/*#include <iostream>
using namespace std;
int main () {
    int inp;
    cin>> inp;
    cout<< "Nilai = " << inp;
    return 0;
}*/

/*Contoh 3*/
/*#include <iostream>
#include <stdio.h>
using namespace std;
int main () {
    float w, x, y; float z;
    x = 7; y = 3; w = 1;
    z = (x + y)/(y + w);
    cout<< "Nilai z = "<<z<<endl;
    return 0;
}*/

/*Contoh 4*/
/*#include <iostream>
#include <stdio.h>
using namespace std;
int main () {
    double tot_pembelian, diskon;
    cout<<"total pembelian: Rp.";
    cin>>tot_pembelian;
    diskon = 0;
    if (tot_pembelian >= 100000)
        diskon = 0.05*tot_pembelian;
    else
        diskon = 0;
    cout<<"besar diskon = Rp." <<diskon;
}*/

/*Contoh 5*/
/*#include <iostream>
#include <conio.h>
using namespace std;
int main (){
    int i=1;
    int jum;
    cin>>jum;
    do{
        cout<<"baris ke-"<<i+1<<endl;
        i++;
    }while(i<jum);
    getch();
    return 0;
}*/

/*nomor 1 tp*/
/*#include <iostream>
using namespace std;

int main () {
    string nama, nim, asal;
    cout << "Siapa namamu? ";
    cin >> nama;
    cout << "Berapa NIMmu? ";
    cin >> nim;
    cout << "Anda dari mana?" ;
    cin >> asal;
    cout << "Nama saya adalah " << nama << endl;
    cout << "NIM saya adalah " << nim << endl;
    cout << "Saya berasal dari " << asal << endl;
    return 0;
}*/

/*Nomor 2 tp*/
/*#include <iostream>
using namespace std;

int main () {
    int bil1 = 3, bil2 = 4, hasil1;
    float bil3 = 3.0, bil4 = 4.0, hasil2;

    hasil1 = bil1 + bil2;
    cout << hasil1 << endl;
    hasil1 = bil1 - bil2;
    cout << hasil1 << endl;
    hasil1 = bil1 * bil2;
    cout << hasil1 << endl;
    hasil1 = bil1 / bil2;
    cout << hasil1 << endl;
    hasil1 = bil2 / bil1;
    cout << hasil1 << endl;
    hasil1 = bil1 % bil2;
    cout << hasil1 << endl;
    hasil1 = bil2 % bil1;
    cout << hasil1 << endl;
    hasil2 = bil3 / bil4;
    cout << hasil2 << endl;

    return 0;
}*/

/*nomor3 tp*/
/*#include <iostream>
using namespace std;

int main() {
    int bil1 = 2, bil2 = 3, hasil;
    hasil = bil1 > bil2;
    cout << hasil << endl;
    hasil = bil1 >= bil2;
    cout << hasil << endl;
    hasil = bil1 < bil2;
    cout << hasil << endl;
    hasil = bil1 <= bil2;
    cout << hasil << endl;
    hasil = bil1 == bil2;
    cout << hasil << endl;
    hasil = bil1 != bil2;
    cout << hasil << endl;
    return 0;
}*/

/*nomor 4 tp*/
/*#include <iostream>
using namespace std;

int main() {
    int bil1 = 2, bil2 = 3, hasil;
    hasil = bil1 <= bil2 && bil1 < bil2;
    cout << hasil << endl;
    hasil = bil1 >= bil2 || bil1 < bil2;
    cout << hasil << endl;
    hasil = !(bil1 >= bil2) || bil1 < bil2;
    cout << hasil << endl;
    return 0;
}*/

/*Nomor 5 tp*/
/*#include <iostream>
using namespace std;

int main() {
    int nilai;
    cout << "Masukan Nilai (dalam angka): ";
    cin >> nilai;
    if (nilai > 80) {
        cout << "A" << endl;
    } else {
        cout << "Bukan A" << endl;
    }
    return 0;
}*/

/*Nomor 6 TP*/
/*#include <iostream>
using namespace std;

int main() {
    int a, b, bilangan;
    cout << "Masukkan batas bawah: ";
    cin >> a;
    cout << "Masukkan batas atas: ";
    cin >> b;
    for (bilangan = a; bilangan <= b; bilangan++) {
        cout << "Bilangan " << bilangan << endl;
    }
    return 0;
}*/

/*Nomor 7 TP*/
#include <iostream>
using namespace std;

int main() {
    int bilangan, asli, jumlah;
    cout << "Masukkan bilangan asli: ";
    cin >> asli;
    bilangan = 1;
    jumlah = 0;
    while (bilangan <= asli) {
        if (bilangan % 2 == 0) {
            jumlah += bilangan;
        }
        bilangan++;
    }
    cout << "Jumlah bilangan genap: " << jumlah << endl;
    return 0;
}
