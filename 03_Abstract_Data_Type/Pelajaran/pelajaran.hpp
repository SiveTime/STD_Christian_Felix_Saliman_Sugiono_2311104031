#ifndef pelajaran_hpp
#define pelajaran_hpp

#include <string>
using namespace std;
struct pelajaran {
    string Nmapel;
    string Kmapel;
};

pelajaran create_pelajaran(string Nmapel, string Kmapel);

void tampil_pelajaran(pelajaran pel);
#endif