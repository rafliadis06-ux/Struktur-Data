#include <iostream>
using namespace std;

int Faktorial(int n) {
    if (n == 0 || n == 1) {
        cout << "1";
        return 1;
    }
    else {
        cout << n << " x ";
        return n * Faktorial(n - 1);
    }
}

int Fibonacci(int n) {
    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }

    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int JumlahArray(int data[], int size) {
    if (size == 0) {
        return 0;
    }

    return data[size - 1] + JumlahArray(data, size - 1);
}

bool Palindrome(string kata, int left, int right) {
    if(left >= right) {
        return true;
    }
    if(kata[left] != kata[right]) {
        return false;
    }

    return Palindrome(kata, left + 1, right - 1);
}

int main() {
    int menu;

    cout << "===== MENU =====" << endl;
    cout << "1. Faktorial" << endl;
    cout << "2. Fibonacci" << endl;
    cout << "3. Jumlah Array" << endl;
    cout << "4. Palindrome" << endl;
    cout << "Pilih menu: ";
    cin >> menu;

    if(menu == 1) {
        int number;

        cout << "Masukkan angka faktorial: ";
        cin >> number;

        cout << "Langkah: ";
        int hasil = Faktorial(number);

        cout << endl;
        cout << "Hasil dari " << number << "! adalah: " << hasil << endl;
    }

    else if(menu == 2) {
        int number;

        cout << "Masukkan angka Fibonacci: ";
        cin >> number;

        cout << "Nilai Fibonacci ke-" << number << " adalah: " << Fibonacci(number) << endl;
    }

    else if(menu == 3) {
        int size;

        cout << "Masukkan jumlah data array: ";
        cin >> size;

        int Array[size];

        for(int i = 0; i < size; i++) {
            cout << "Masukkan data ke-" << i + 1 << ": ";
            cin >> Array[i];
        }

        cout << "Hasil dari jumlah array adalah: " << JumlahArray(Array, size) << endl;
    }

    else if(menu == 4) {
        string tulisan;

        cout << "Masukkan kata: ";
        cin >> tulisan;

        if(Palindrome(tulisan, 0, tulisan.length() - 1)) {
            cout << tulisan << " adalah palindrome." << endl;
        }
        else {
            cout << tulisan << " bukan palindrome." << endl;
        }
    }

    else {
        cout << "Menu yang dipilih tidak tersedia." << endl;
    }

    return 0;
}