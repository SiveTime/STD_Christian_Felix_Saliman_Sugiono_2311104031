// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n;
//     cout << "Masukkan jumlah elemen array: ";
//     cin >> n;
//     vector<int> arr(n);
//     vector<int> genap, ganjil;
//     cout << "Masukkan elemen array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//         if (arr[i] % 2 == 0) {
//             genap.push_back(arr[i]);
//         } else {
//             ganjil.push_back(arr[i]);
//         }
//     }
//     cout << "Data Array  : ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     cout << "Nomor Genap : ";
//     for (int i = 0; i < genap.size(); i++) {
//         cout << genap[i];
//         if (i != genap.size() - 1) {
//             cout << ", ";
//         }
//     }
//     cout << endl;
//     cout << "Nomor Ganjil: ";
//     for (int i = 0; i<ganjil.size(); i++) {
//         cout << ganjil[i];
//         if (i != ganjil.size() - 1) {
//             cout << ", ";
//         }
//     }
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int x, y, z;
//     cout << "Masukkan ukuran dimensi pertama (x): ";
//     cin >> x;
//     cout << "Masukkan ukuran dimensi kedua (y): ";
//     cin >> y;
//     cout << "Masukkan ukuran dimensi ketiga (z): ";
//     cin >> z;

//     int array [x][y];

//     cout << "Masukkan elemen-elemen array:" << endl;
//     for (int i = 0; i < x; i++) {
//         for (int j = 0; j < y; j++) {
//             for (int k = 0; k < z; k++) {
//                 cout << "Elemen [" << i << "][" << j << "][" << k << "]: ";
//                 cin >> array[i][j][k];
//             }
//         }
//     }

//     cout << "Array tiga dimensi yang diinput:" << endl;
//     for (int i = 0; i < x; i++) {
//         for (int j = 0; j < y; j++) {
//             for (int k = 0; k < z; k++) {
//                 cout << "Elemen [" << i << "][" << j << "][" << k << "] = " << array[i][j][k] << endl;
//             }
//         }
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Masukkan elemen-elemen array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int pilihan;
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Cari Nilai Maksimum" << endl;
        cout << "2. Cari Nilai Minimum" << endl;
        cout << "3. Hitung Nilai Rata-Rata" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih opsi (1-4): ";
        cin >> pilihan;
        
        switch (pilihan) {
            case 1: {
                int maks = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] > maks) {
                        maks = arr[i];
                    }
                }
                cout << "Nilai Maksimum: " << maks << endl;
                break;
            }
            case 2: {
                int min = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] < min) {
                        min = arr[i];
                    }
                }
                cout << "Nilai Minimum: " << min << endl;
                break;
            }
            case 3: {
                double total = 0;
                for (int i = 0; i < n; i++) {
                    total += arr[i];
                }
                double rataRata = total / n;
                cout << "Nilai Rata-Rata: " << rataRata << endl;
                break;
            }
            case 4:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }
    } while (pilihan != 4);

    return 0;
}