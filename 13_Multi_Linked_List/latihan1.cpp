#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Proyek {
    string namaProyek;
    int durasi;
};

struct Pegawai {
    string nama;
    string id;
    vector<Proyek> daftarProyek;
};

void tampilkanDataPegawai(const vector<Pegawai>& pegawaiList) {
    for (const auto& pegawai : pegawaiList) {
        cout << "Pegawai: " << pegawai.nama << " (ID: " << pegawai.id << ")\n";
        for (const auto& proyek : pegawai.daftarProyek) {
            cout << "  - Proyek: " << proyek.namaProyek << ", Durasi: " << proyek.durasi << " bulan\n";
        }
        cout << endl;
    }
}

int main() {
    vector<Pegawai> pegawaiList = {
        {"Andi", "P001", {}},
        {"Budi", "P002", {}},
        {"Citra", "P003", {}}
    };

    pegawaiList[0].daftarProyek.push_back({"Aplikasi Mobile", 12});
    pegawaiList[1].daftarProyek.push_back({"Sistem Akuntansi", 8});
    pegawaiList[2].daftarProyek.push_back({"E-commerce", 10});

    pegawaiList[0].daftarProyek.push_back({"Analisis Data", 6});

    auto& proyekAndi = pegawaiList[0].daftarProyek;
    proyekAndi.erase(
        remove_if(proyekAndi.begin(), proyekAndi.end(),
                  [](const Proyek& p) { return p.namaProyek == "Aplikasi Mobile"; }),
        proyekAndi.end());

    tampilkanDataPegawai(pegawaiList);

    return 0;
}
