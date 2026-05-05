#include <iostream>
#include <string>
using namespace std;

class mahasiswa{
    private:
    int nim;
    string nama;
    public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int iNim, string iNama);
    void cetak();
};

mahasiswa :: mahasiswa(){
}

int main() {
    mahasiswa mhs1 (102030);
    mahasiswa mhs2 ("Andi");
    mahasiswa mhs3 (102030, "Santi");

    cout << "Mahasiswa 1: "; mhs1.cetak();
    cout << "Mahasiswa 2: "; mhs2.cetak();
    cout << "Mahasiswa 3: "; mhs3.cetak();
    return 0;
}