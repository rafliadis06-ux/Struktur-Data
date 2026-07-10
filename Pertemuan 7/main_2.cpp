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
int Fibonacci(int n) {
    if(n == 0) {
        return 0;
    }
    if(n == 1) 
        return 1;
    
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int JumlahArray(int data[], int size) {
    if (size == 0) {
        return 0;
    }

    return data[size-1] + JumlahArray(data, size-1);
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
    int number = 5;
    // Faktorial
    cout <<"Hasil dari "<<number<<"! adalah: " <<Faktorial(number)<<endl;
    cout << "1" << endl; // Menampilkan hasil akhir dari faktorial

    // Fibonacci
    cout <<"Nilai Fibonacci ke-" <<number<<" adalah: " <<Fibonacci(number)<<endl;

    // Jumlah Array
    int Array[] = {1, 3, 5, 7, 9};
    int batas = sizeof(Array)/sizeof(Array[0]);
    cout <<"Hasil dari jumlah array adalah: " <<JumlahArray(Array, batas)<<endl;

    // Palindrome
    string tulisan = "radar";
    if(Palindrome(tulisan,0, tulisan.length()-1)){
        cout << tulisan << " adalah palindrome." << endl;
    } 
    else {
        cout << tulisan << " bukan palindrome." << endl;
    }

    return 0;
}
