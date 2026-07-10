#include <iostream>
using namespace std;

int main() {
    int nilai[3][4]; // deklarasi array 3x4

    // Proses input dari user
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Masukkan nilai indeks ke-[" << i << "][" << j << "] : ";
            cin >> nilai[i][j];
        }
    }

    // Menampilkan hasil input
    cout << "\nData yang telah dimasukkan:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Nilai indeks ke-[" << i << "][" << j << "] : " << nilai[i][j] << endl;
        }
    }

    return 0;
}