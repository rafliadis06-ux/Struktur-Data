#include <iostream>
using namespace std;

int main() {
    int baris, kolom;
    cout << "Inputkan Baris Array= ";
    cin >> baris;
    cout << "Inputkan Kolom Array= ";
    cin >> kolom;

    int nilai[baris][kolom];
    int total = 0;

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Inputkan data indek ke-[" << i << "][" << j << "] : ";
            cin >> nilai[i][j];
            total += nilai[i][j];
        }
    }

    // Cetak matriks
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << nilai[i][j] << " ";
        }
        cout << endl;
    }

    // Cetak proses penjumlahan
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << nilai[i][j] << " + ";
        }
    }
    cout << "= " << total << endl;

    // Hitung rata-rata
    double average = (double)total / (baris * kolom);
    cout << "Rata-rata Nilai Array : " << average << endl;

    return 0;
}