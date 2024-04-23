#include<iostream>
using namespace std;

class mahasiswa
{
public: // akses mofifier
    string nama;
    int umur;
    string jurusan;

    void output(){
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "Jurusan: " << jurusan << endl;
    }
};
class Matakuliah
{
private:
    string kodeMk;
    string namaMk;
    int sks;
public:
    void input(){
        cout << "kode Mk: ";
        cin >> kodeMk;
        cout << "Nama Mk: ";
        cin >> namaMk;
        cout << "SKS: ";
        cin >> sks;
    }
    void output(){
        cout << "kode Mk: " << kodeMk << endl;
        cout << "nama Mk: " << namaMk << endl;
        cout << "SKS: " << sks << endl;
    }
};
int main(){
    mahasiswa mhs;
    Matakuliah mk;

    mhs.nama = "Budi";
    mhs.umur = 20;
    mhs.jurusan  = "Teknik Informatika";
    mhs.output();

    mk.input();
    mk.output();

    return 0;
}