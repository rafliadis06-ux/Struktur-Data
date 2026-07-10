#include <iostream>
using namespace std;

int cari(int data[], int n, int k) {
    int posisi, i, ketemu;

    if (n <= 0) 
        posisi = -1;
    else 
    {
        ketemu = 0;
        i = 0;
        while ((i < n) && ! ketemu)
        if (data[i] == k)
        {
            posisi = i;
            ketemu = 1;
            
        }
        else
            i++;
        if (! ketemu)
            posisi = -1;
        
    }
    return posisi;
}

int main()
{
    int n;
    cout << "Masukkan jumlah elemen dalam larik: ";
    cin >> n;
    
    int data[100];
    cout << "Masukkan " << n << " elemen larik: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Data[" << i << "] = ";
        cin >> data[i];
    }
    
    int dicari;
    cout << "Masukkan nilai yang dicari: ";
    cin >> dicari;

    cout << "\nPosisi " << dicari << " dalam larik data: "
            << cari(data, n, dicari) << endl;
    return 0;
}
