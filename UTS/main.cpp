#include <iostream>
#include <queue>
#include <stack>
using namespace std;

struct Tiket {
    string nama, film;
    string jam;
};

int main() {
    queue<Tiket> antrian;
    stack<Tiket> riwayat;
    Tiket data[100], t;
    int n = 0, pilih;

    do {
        cout << "\n===== TIKET BIOSKOP =====";
        cout << "\n1. Tambah Pesanan";
        cout << "\n2. Proses Pesanan";
        cout << "\n3. Tampilkan Antrian";
        cout << "\n4. Tampilkan Riwayat";
        cout << "\n5. Sorting Jam";
        cout << "\n6. Keluar";
        cout << "\nPilih : ";
        cin >> pilih;

        switch (pilih) {
            case 1:
                cout << "\nNama : ";
                cin >> t.nama;
                cout << "Film : ";
                cin >> t.film;
                cout << "Jam  : ";
                cin >> t.jam;
                antrian.push(t);
                data[n] = t;
                n++;
                cout << "Pesanan ditambahkan!\n";
                break;

            case 2:
                if (antrian.empty()) {
                    cout << "\nAntrian kosong!\n";
                } else {
                    t = antrian.front();
                    antrian.pop();
                    riwayat.push(t);
                    cout << "\nPesanan diproses : ";
                    cout << t.nama << " - " << t.film << endl;
                }
                break;

            case 3: {
                queue<Tiket> temp = antrian;
                cout << "\n=== ANTRIAN ===\n";
                if (temp.empty()) {
                    cout << "Antrian kosong.\n";
                }
                while (!temp.empty()) {
                    t = temp.front();
                    cout << t.nama << " | " << t.film << " | " << t.jam << endl;
                    temp.pop();
                }
                break;
            }

            case 4: {
                stack<Tiket> temp = riwayat;
                cout << "\n=== RIWAYAT ===\n";
                if (temp.empty()) {
                    cout << "Riwayat kosong.\n";
                }
                while (!temp.empty()) {
                    t = temp.top();
                    cout << t.nama << " | " << t.film << endl;
                    temp.pop();
                }
                break;
            }

            case 5:
                for (int i = 0; i < n - 1; i++) {
                    for (int j = 0; j < n - i - 1; j++) {
                        if (data[j].jam > data[j + 1].jam) {
                            swap(data[j], data[j + 1]);
                        }
                    }
                }
                cout << "\n=== SORTING JAM ===\n";
                if (n == 0) {
                    cout << "Belum ada data.\n";
                }
                for (int i = 0; i < n; i++) {
                    cout << data[i].nama << " | " << data[i].film << " | " << data[i].jam << endl;
                }
                break;

            case 6:
                cout << "\nTerima kasih!\n";
                break;

            default:
                cout << "\nPilihan tidak valid!\n";
        }

    } while (pilih != 6);

    return 0;
}