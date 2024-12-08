#include "pelajaran.hpp"
#include "iostream"
using namespace std;

pelajaran create_pelajaran(string Mmapel, string Kmapel){
    pelajaran pel;
    pel.Mmapel = Mmapel;
    pel.Kmapel = Kmapel;
    return pel;
}

void tampil_pelajaran(pelajaran pel){
    cout<<"Nama Pelajaran: "<< pel.Mmapel<<endl;
    cout<<"Kode Pelajaran: "<< pel.Kmapel<<endl;
}