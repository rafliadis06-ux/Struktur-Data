#include <iostream>
using namespace std;

int main() {
    int baris, kolom;
    cout<<"Inputkan Baris Array: ";
    cin>>baris;
    cout<<"Inputkan Kolom Array: ";
    cin>>kolom;
    int nilai[baris][kolom];

    // Proses input dari user
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Masukkan nilai indeks ke-[" << i << "][" << j << "] : ";
            cin >> nilai[i][j];
        }
    }

    // Menampilkan hasil input
    cout << "\nData yang telah dimasukkan:\n";
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Nilai indeks ke-[" << i << "][" << j << "] : " << nilai[i][j] << endl;
        }
    }

    return 0;
}