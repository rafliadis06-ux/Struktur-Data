#include <iostream>
using namespace std;

int Faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else{
        cout << n << " x ";
        return n * Faktorial(n - 1);
    }
}

int main() {
    int number = 5; // Contoh angka untuk menghitung faktorial

    cout << "Faktorial dari " << number << " adalah: ";
    int hasil = Faktorial(number);

    cout << "1 = " << hasil << endl;

    return 0;
}