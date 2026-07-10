#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;

    int* dokumen = new int[n]; // tidak dibatasi 10 lagi
    int temp;
    char koma; // untuk membaca koma

    cout << "Masukkan " << n << " angka :" << endl;

    for(int i = 0; i < n; i++){
        cin >> dokumen[i];
        if(i < n-1){
            cin >> koma; // untuk membaca koma
        }
    }

    cout << "Tampilan data awal:" << endl;
    for(int i = 0; i < n; i++){
        cout << dokumen[i] << " ";
    }
    cout << endl;

    // Selection Sort
    for(int i = 0; i < n - 1; i++){
        int min_index = i;
        for(int j = i + 1; j < n; j++){
            if(dokumen[j] < dokumen[min_index]){
                min_index = j;
            }
        }

        if(min_index != i){
            temp = dokumen[i];
            dokumen[i] = dokumen[min_index];
            dokumen[min_index] = temp;
        }

        cout << "Step ke-" << i + 1 << ": ";
        for(int k = 0; k < n; k++){
            cout << dokumen[k] << " ";
        }
        cout << endl;
    }

    cout << "Data setelah diurutkan:" << endl;
    for(int i = 0; i < n; i++){
        cout << dokumen[i] << " ";
    }

    delete[] dokumen;

    return 0;
}