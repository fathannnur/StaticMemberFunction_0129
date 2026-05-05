#include <iostream>
using namespace std;
class buku{
    string judul;

    public:
    buku &setJudul(string j){
        this->judul = j;
        return *this;
    }
    string getJudul(){
        return this->judul;
    }

};

int main()
{
    buku bukunya;
    // bukunya.setJudul("Matematika");
    // cout << bukunya.getJudul();
    cout<<bukunya.setJudul("Matematika").getJudul();
    return 0;   
}