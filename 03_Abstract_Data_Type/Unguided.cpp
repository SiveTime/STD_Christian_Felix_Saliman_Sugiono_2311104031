#include <iostream>
#include <string>
using namespace std;

// Struktur untuk menyimpan data mahasiswa
struct Mahasiswa {
    string nama;
    string nim;
    float uts, uas, tugas, nilai_akhir;
};

// Fungsi untuk menghitung nilai akhir
float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

int main() {
    const int MAX_MAHASISWA = 10;
    Mahasiswa mahasiswa[MAX_MAHASISWA];
    int jumlahMahasiswa;

    // Memasukkan jumlah mahasiswa (maksimum 10)
    cout << "Masukkan jumlah mahasiswa (maksimum 10): ";
    cin >> jumlahMahasiswa;

    // Validasi input jumlah mahasiswa
    if (jumlahMahasiswa > MAX_MAHASISWA || jumlahMahasiswa <= 0) {
        cout << "Jumlah mahasiswa tidak valid!";
        return 1;
    }

    // Memasukkan data mahasiswa
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "\nMahasiswa " << i + 1 << endl;
        cout << "Nama: ";
        cin.ignore();  // Mengabaikan karakter newline dari input sebelumnya
        getline(cin, mahasiswa[i].nama);
        cout << "NIM: ";
        getline(cin, mahasiswa[i].nim);
        cout << "Nilai UTS: ";
        cin >> mahasiswa[i].uts;
        cout << "Nilai UAS: ";
        cin >> mahasiswa[i].uas;
        cout << "Nilai Tugas: ";
        cin >> mahasiswa[i].tugas;

        // Menghitung nilai akhir
        mahasiswa[i].nilai_akhir = hitungNilaiAkhir(mahasiswa[i].uts, mahasiswa[i].uas, mahasiswa[i].tugas);
    }

    // Menampilkan data mahasiswa beserta nilai akhirnya
    cout << "\nData Mahasiswa dan Nilai Akhir:\n";
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Nama: " << mahasiswa[i].nama << endl;
        cout << "NIM: " << mahasiswa[i].nim << endl;
        cout << "Nilai UTS: " << mahasiswa[i].uts << endl;
        cout << "Nilai UAS: " << mahasiswa[i].uas << endl;
        cout << "Nilai Tugas: " << mahasiswa[i].tugas << endl;
        cout << "Nilai Akhir: " << mahasiswa[i].nilai_akhir << endl;
        cout << "-------------------------" << endl;
    }

    return 0;
}
