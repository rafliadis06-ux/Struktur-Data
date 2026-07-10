#include <iostream>
using namespace std;

struct Mahasiswa {
    string NIM;
    string nama;
    float IPK;
    int umur;
    string noHP;
};

int main() {
    int batas, i;

    cout << "Masukkan batas: ";
    cin >> batas;
    cin.ignore(); // supaya getline tidak loncat

    Mahasiswa mhs[batas];

    // Input data mahasiswa
    for(i = 0; i < batas; i++) {
        cout << "\nInputan Mahasiswa " << (i+1) << endl;

        cout << "Masukkan NIM: ";
        getline(cin, mhs[i].NIM);

        cout << "Masukkan Nama: ";
        getline(cin, mhs[i].nama);

        cout << "Masukkan IPK: ";
        cin >> mhs[i].IPK;

        cout << "Masukkan Umur: ";
        cin >> mhs[i].umur;
        cin.ignore();

        cout << "Masukkan No HP: ";
        getline(cin, mhs[i].noHP);
    }

    // Output data mahasiswa
    cout << "\n=============================\n";
    for(i = 0; i < batas; i++) {
        cout << "Data Mahasiswa " << (i+1) << endl;
        cout << "NIM   = " << mhs[i].NIM << endl;
        cout << "Nama  = " << mhs[i].nama << endl;
        cout << "IPK   = " << mhs[i].IPK << endl;
        cout << "Umur  = " << mhs[i].umur << endl;
        cout << "No HP = " << mhs[i].noHP << endl;
        cout << endl;
    }

    return 0;
}