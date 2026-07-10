#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string kalimat, cari;
    string vokal = "", konsonan = "", numerik = "";

    cout << "Input : ";
    getline(cin, kalimat);

    for (int i = 0; i < kalimat.length(); i++) {
        char huruf = tolower(kalimat[i]);

        if (huruf >= 'a' && huruf <= 'z') {
            if (huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o') {
                vokal += huruf;
            } else {
                konsonan += huruf;
            }
        } 
        else if (huruf >= '0' && huruf <= '9') {
            numerik += huruf;
        }
    }

    cout << "\nOutput : " << endl;

    cout << "Vokal = " << vokal.length() << " = ";
    for (int i = 0; i < vokal.length(); i++) {
        cout << vokal[i] << " ";
    }

    cout << "\nKonsonan = " << konsonan.length() << " = ";
    for (int i = 0; i < konsonan.length(); i++) {
        cout << konsonan[i] << " ";
    }

    cout << "\nNumerik = " << numerik.length() << " = ";
    for (int i = 0; i < numerik.length(); i++) {
        cout << numerik[i] << " ";
    }

    cout << "\n\nMasukkan data yang akan Anda cari: ";
    getline(cin, cari);

    if (kalimat.find(cari) != string::npos) {
        cout << "\nData ditemukan..." << endl;
    } else {
        cout << "\nData tidak ada..." << endl;
    }

    return 0;
}