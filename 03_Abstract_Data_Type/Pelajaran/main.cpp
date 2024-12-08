#include "pelajaran.hpp"
#include "iostream"
using namespace std;

int main(){
    string Mmapel = "Struktur Data";
    string Kmapel = "STD";

    pelajaran pel = create_pelajaran(Mmapel, Kmapel);

    tampil_pelajaran(pel);
    return 0;
}