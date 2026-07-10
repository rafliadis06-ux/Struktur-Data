#include <iostream>
#include <cstdlib>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

// Tambah Data
void push() {
    int nilai;

    cout << "Masukkan data: ";
    cin >> nilai;

    Node* baru = new Node;
    baru->data = nilai;
    baru->next = top;
    top = baru;

    cout << "Data " << nilai << " berhasil dimasukkan ke stack" << endl;
}

// Hapus Data
void pop() {
    if (top == NULL) {
        cout << "Stack kosong!" << endl;
        return;
    }

    Node* hapus = top;
    cout << "Data yang dihapus: " << top->data << endl;

    top = top->next;
    delete hapus;
}

// Lihat Data Teratas
void peek() {
    if (top == NULL) {
        cout << "Stack kosong!" << endl;
    } else {
        cout << "Data teratas: " << top->data << endl;
    }
}

// Tampilkan Stack
void display() {
    if (top == NULL) {
        cout << "Stack kosong!" << endl;
        return;
    }

    Node* bantu = top;

    cout << "Isi Stack: ";
    while (bantu != NULL) {
        cout << bantu->data << " ";
        bantu = bantu->next;
    }

    cout << endl;
}

// Menu
void menu() {
    cout << "\n===== MENU STACK LINKED LIST =====" << endl;
    cout << "1. Tambah Data" << endl;
    cout << "2. Hapus Data" << endl;
    cout << "3. Lihat Data Teratas" << endl;
    cout << "4. Tampilkan Stack" << endl;
    cout << "5. Keluar" << endl;
    cout << "Pilih menu: ";
}

int main() {
    int pilihan;

    do {
        menu();
        cin >> pilihan;

        cout << endl;

        if (pilihan == 1) {
            push();
        }
        else if (pilihan == 2) {
            pop();
        }
        else if (pilihan == 3) {
            peek();
        }
        else if (pilihan == 4) {
            display();
        }
        else if (pilihan == 5) {
            cout << "Program selesai." << endl;
            exit(0);
        }
        else {
            cout << "Pilihan tidak tersedia!" << endl;
        }

    } while (pilihan != 5);

    return 0;
}