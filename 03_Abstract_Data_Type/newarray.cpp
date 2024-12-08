#include <iostream>
using namespace std;

// Fungsi untuk menampilkan isi array 2D
void tampilkanArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Fungsi untuk menukarkan elemen pada posisi tertentu di dua array 2D
void tukarArray(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

// Fungsi untuk menukarkan nilai variabel yang ditunjuk oleh dua pointer
void tukarPointer(int* p1, int* p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    // Inisialisasi 2 buah array 2D berukuran 3x3
    int array1[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int array2[3][3] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };

    // Inisialisasi 2 buah pointer integer
    int a = 10, b = 20;
    int* p1 = &a;
    int* p2 = &b;

    // Tampilkan array sebelum ditukar
    cout << "Array 1 sebelum ditukar:" << endl;
    tampilkanArray(array1);
    cout << "Array 2 sebelum ditukar:" << endl;
    tampilkanArray(array2);

    // Tukar elemen pada posisi [1][1] di kedua array
    tukarArray(array1, array2, 1, 1);

    // Tampilkan array setelah ditukar
    cout << "Array 1 setelah ditukar elemen [1][1]:" << endl;
    tampilkanArray(array1);
    cout << "Array 2 setelah ditukar elemen [1][1]:" << endl;
    tampilkanArray(array2);

    // Tampilkan nilai sebelum pointer ditukar
    cout << "Nilai sebelum pointer ditukar: " << endl;
    cout << "p1: " << *p1 << ", p2: " << *p2 << endl;

    // Tukar nilai variabel yang ditunjuk oleh pointer
    tukarPointer(p1, p2);

    // Tampilkan nilai setelah pointer ditukar
    cout << "Nilai setelah pointer ditukar: " << endl;
    cout << "p1: " << *p1 << ", p2: " << *p2 << endl;

    return 0;
}
