#include <iostream>
using namespace std;

struct Mahasiswa {
    char NIM[12];
    char nama[50];
    float IPK;
};

int main() {
    int i;
    Mahasiswa mhs1, mhs2, mhs3;

    //Input data mahasiswa
    cout << "Masukkan data mahasiswa 1:" << endl;
    cout << "Masukkan NIM: ";
    cin >> mhs1.NIM;
    cout << "Masukkan Nama: ";
    cin >> mhs1.nama;
    cout << "Masukkan IPK: ";
    cin >> mhs1.IPK;

    cout<<endl<<endl;

    //Output data mahasiswa
    cout << "NIM: " << mhs1.NIM << endl;
    cout << "Nama: " << mhs1.nama << endl;
    cout << "IPK: " << mhs1.IPK << endl;

    //Input data mahasiswa 2
    cout << "Masukkan data mahasiswa 2:" << endl;
    cout << "Masukkan NIM: ";
    cin >> mhs2.NIM;
    cout << "Masukkan Nama: ";
    cin >> mhs2.nama;
    cout << "Masukkan IPK: ";
    cin >> mhs2.IPK;

    cout<<endl<<endl;

    //Output data mahasiswa 2
    cout << "NIM: " << mhs2.NIM << endl;
    cout << "Nama: " << mhs2.nama << endl;
    cout << "IPK: " << mhs2.IPK << endl;

    //Input data mahasiswa 3
    cout << "Masukkan data mahasiswa 3:" << endl;
    cout << "Masukkan NIM: ";
    cin >> mhs3.NIM;
    cout << "Masukkan Nama: ";
    cin >> mhs3.nama;
    cout << "Masukkan IPK: ";
    cin >> mhs3.IPK;

    cout<<endl<<endl;

    //Output data mahasiswa 3
    cout << "NIM: " << mhs3.NIM << endl;
    cout << "Nama: " << mhs3.nama << endl;
    cout << "IPK: " << mhs3.IPK << endl;


    return 0;
}