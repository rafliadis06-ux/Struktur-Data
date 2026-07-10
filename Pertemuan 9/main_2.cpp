#include <iostream>
#define max 10
using namespace std;

struct Tumpukan {
    int atas;
    int data[max];
} T;

void awal() {
    T.atas = -1;
}

int kosong() {
    if (T.atas == -1) {
        return 1;
    } else {
        return 0;
    }
}

int penuh() {
    if (T.atas == max - 1) {
        return 1;
    } else {
        return 0;
    }
}

void input(int data) {
    if (penuh() == 0) {
        T.atas++;
        T.data[T.atas] = data;
        cout << "Data " << T.data[T.atas] << " masuk ke stack" << endl;
    } else {
        cout << "Tumpukan penuh" << endl;
    }
}

void hapus() {
    if (kosong() == 0) {
        cout << "Data teratas sudah terambil" << endl;
        T.atas--;
    } else {
        cout << "Tumpukan kosong" << endl;
    }
}

void tampil() {
    if (kosong() == 0) {
        for (int i = T.atas; i >= 0; i--) {
            cout << "\nTumpukan ke-" << i + 1 << " = " << T.data[i];
        }
        cout << endl;
    } else {
        cout << "Tumpukan kosong" << endl;
    }
}

void bersih() {
    T.atas = -1;
    cout << "Tumpukan Kosong" << endl;
}

int main() {
    int data;

    awal();

    cout << "Masukkan data = ";
    cin >> data;
    input(data);

    cout << "Masukkan data = ";
    cin >> data;
    input(data);

    cout << "Masukkan data = ";
    cin >> data;
    input(data);

    cout << endl;

    tampil();
    cout << endl;

    hapus();
    cout << endl;

    tampil();
    cout << endl;

    bersih();

    tampil();
    cout << endl;

    return 0;
}