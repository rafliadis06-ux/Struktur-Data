#include <iostream>
using namespace std;

struct mahasiswa{
    int nim;
    string nama;
    float ipk;
};

int main() {
    int n;
    cout << "Masukkan jumlah batasan data: ";
    cin >> n;

    mahasiswa var[n];
    mahasiswa *ptr = var;

    for (int i=0; i<n; i++){
        cout << "Input-an Data Mahasiswa ke-" << i+1 << " :" << endl;
        cout << "Masukkan NIM  : "; cin >> var[i].nim;
        cout << "Masukkan Nama : "; cin >> var[i].nama;
        cout << "Masukkan IPK  : "; cin >> var[i].ipk;
    }

    int idx;
    cout << "\nMasukkan index data yang ingin diubah: ";
    cin >> idx;

    mahasiswa temp;
    temp = *(ptr+0);
    *(ptr+0) = *(ptr+idx);
    *(ptr+idx) = temp;

    for(int i=0; i<n; i++){
        cout << "\nData Mahasiswa ke-" << i+1 << " :" << endl;
        cout << "NIM  : " << var[i].nim << endl;
        cout << "Nama : " << var[i].nama << endl;
        cout << "IPK  : " << var[i].ipk << endl;
    }

    return 0;
}