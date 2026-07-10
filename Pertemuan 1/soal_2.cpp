#include <iostream>

using namespace std;

void printarray(int arr[], int length) {
    for (int n = 0; n < length; n++) {
        cout << arr[n] << " ";
    }
    cout << endl;
}

int main() {
    int size1, size2;
    cout << "Masukkan input array pertama: ";
    cin >> size1;
    if (size1 <= 0) {
        cout << "Panjang array harus lebih besar dari 0.\n";
        return 1;
    }

    int *firstarray = new int[size1];
    cout << "Masukkan " << size1 << " elemen untuk array pertama:\n";
    for (int i = 0; i < size1; i++) {
        cin >> firstarray[i];
    }

    cout << "Masukkan input array kedua: ";
    cin >> size2;
    if (size2 <= 0) {
        cout << "Panjang array harus lebih besar dari 0.\n";
        delete[] firstarray;
        return 1;
    }

    int *secondarray = new int[size2];
    cout << "Masukkan " << size2 << " elemen untuk array kedua:\n";
    for (int i = 0; i < size2; i++) {
        cin >> secondarray[i];
    }

    cout << "First Array: ";
    printarray(firstarray, size1);
    cout << "Second Array: ";
    printarray(secondarray, size2);

    delete[] firstarray;
    delete[] secondarray;
    return 0;
}
