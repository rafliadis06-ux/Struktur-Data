#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, cari;
    int low, high, mid;
    int temu = 0;

    cout << "Binary Search" << endl;

    cout << "Masukkan Batasan Data: ";
    cin >> n;

    vector<int> data(n); 

    // input data
    for(int i = 0; i < n; i++){
        cout << "Masukkan data indeks ke-" << i << " : ";
        cin >> data[i];
    }

    cout << "\nMasukkan data yang ingin dicari: ";
    cin >> cari;

    
    low = 0;
    high = n - 1;

    while(low <= high && temu == 0){
        mid = (low + high) / 2;

        if(data[mid] == cari){
            temu = 1;
        }
        else if(cari < data[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    if(temu == 1){
        cout << "Data ditemukan pada indeks ke-" << mid << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}