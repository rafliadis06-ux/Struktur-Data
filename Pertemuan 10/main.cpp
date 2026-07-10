#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insert_rear() {
    int batas, nilai;

    cout << "Masukkan batas input : ";
    cin >> batas;

    for(int i = 1; i <= batas; i++) {
        cout << "Masukkan data ke-" << i << " : ";
        cin >> nilai;

        Node* baru = new Node;
        baru->data = nilai;
        baru->next = NULL;

        if(head == NULL) {
            head = baru;
        }
        else {
            Node* temp = head;
            while(temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = baru;
        }
    }
}

void insert_front() {
    int nilai;

    cout << "Masukkan data : ";
    cin >> nilai;

    Node* baru = new Node;
    baru->data = nilai;
    baru->next = head;
    head = baru;

    cout << "Data berhasil ditambahkan di depan." << endl;
}

void Pick() {
    if(head == NULL) {
        cout << "Queue kosong!" << endl;
    }
    else {
        cout << "Data paling depan : " << head->data << endl;
    }
}

void Dequeue() {
    if(head == NULL) {
        cout << "Queue kosong!" << endl;
        return;
    }

    Node* hapus = head;

    cout << "Data yang dihapus : " << hapus->data << endl;

    head = head->next;
    delete hapus;
}

void tampil() {
    if(head == NULL) {
        cout << "Queue kosong!" << endl;
        return;
    }

    Node* temp = head;

    cout << "Queue : ";
    while(temp != NULL) {
        cout << temp->data << " <- ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    int menu;

    do {
        cout << "\n===== MENU QUEUE =====" << endl;
        cout << "1. Tambah dari Belakang" << endl;
        cout << "2. Tambah dari Depan" << endl;
        cout << "3. Pick" << endl;
        cout << "4. Dequeue" << endl;
        cout << "5. Tampilkan Queue" << endl;
        cout << "6. Exit" << endl;
        cout << "Pilih menu : ";
        cin >> menu;

        if(menu == 1) {
            insert_rear();
        }
        else if(menu == 2) {
            insert_front();
        }
        else if(menu == 3) {
            Pick();
        }
        else if(menu == 4) {
            Dequeue();
        }
        else if(menu == 5) {
            tampil();
        }
        else if(menu == 6) {
            cout << "Program selesai." << endl;
        }
        else {
            cout << "Menu tidak tersedia!" << endl;
        }

    } while(menu != 6);

    return 0;
}