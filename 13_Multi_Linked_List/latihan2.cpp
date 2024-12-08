#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Buku {
    string judul;
    string tanggalPengembalian;
};

struct Anggota {
    string nama;
    string id;
    vector<Buku> daftarBuku;
};

void tampilkanDataAnggota(const vector<Anggota>& anggotaList) {
    for (const auto& anggota : anggotaList) {
        cout << "Anggota: " << anggota.nama << " (ID: " << anggota.id << ")\n";
        for (const auto& buku : anggota.daftarBuku) {
            cout << "  - Buku: " << buku.judul << ", Pengembalian: " << buku.tanggalPengembalian << "\n";
        }
        cout << endl;
    }
}

int main() {
    vector<Anggota> anggotaList = {
        {"Rani", "A001", {}},
        {"Dito", "A002", {}},
        {"Vina", "A003", {}}
    };

    anggotaList[0].daftarBuku.push_back({"Pemrograman C++", "01/12/2024"});
    anggotaList[1].daftarBuku.push_back({"Algoritma Pemrograman", "15/12/2024"});

    anggotaList[0].daftarBuku.push_back({"Struktur Data", "10/12/2024"});

    // Hapus anggota Dito
    anggotaList.erase(
        remove_if(anggotaList.begin(), anggotaList.end(),
                  [](const Anggota& a) { return a.id == "A002"; }),
        anggotaList.end());

    tampilkanDataAnggota(anggotaList);

    return 0;
}
