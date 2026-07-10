#include <iostream>
using namespace std;

struct Mahasiswa {
    char NIM[12];
    char nama[50];
    float IPK;
    int umur;
    char noHP[15];
};

int main() {
    int i;
    Mahasiswa mhs[3];

    //Input data mahasiswa
    for(i = 0; i < 3; i++) {
        cout << "Masukkan data mahasiswa " << (i+1) << ":" << endl;
        cout << "Masukkan NIM: ";
        cin >> mhs[i].NIM;
        cout << "Masukkan Nama: ";
        cin >> mhs[i].nama;
        cout << "Masukkan IPK: ";
        cin >> mhs[i].IPK;
        cout << "Masukkan Umur: ";
        cin >> mhs[i].umur;
        cout << "Masukkan No HP: ";
        cin >> mhs[i].noHP;
        cout << endl << endl;
    }

    //Output data mahasiswa
    for(i = 0; i < 3; i++) {
        cout << "Data Mahasiswa " << (i+1) << ":" << endl;
        cout << "NIM: " << mhs[i].NIM << endl;
        cout << "Nama: " << mhs[i].nama << endl;
        cout << "IPK: " << mhs[i].IPK << endl;
        cout << "Umur: " << mhs[i].umur << endl;
        cout << "No HP: " << mhs[i].noHP << endl;
        cout << endl;
    }


    return 0;
}