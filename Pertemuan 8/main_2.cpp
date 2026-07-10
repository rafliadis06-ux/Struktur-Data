#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* createNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void data_baru(Node*&head, int data){
    Node* newNode = createNode(data);
    newNode->next = head;
    head = newNode;
}

void printList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deleteNode(Node*& head, int key){
    Node* temp = head;
    Node* prev = NULL;

    if(temp != NULL && temp->data == key){
        head = temp->next;
        delete temp;
        cout << "Data " << key << " berhasil dihapus dari linked list." << endl;
        return;
    }

    while(temp != NULL && temp->data != key){
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL){
        cout << "Data " << key << " tidak ditemukan dalam linked list." << endl;
        return;
    }

    prev->next = temp->next;
    delete temp;
    cout << "Data " << key << " berhasil dihapus dari linked list." << endl;
}

int main(){
    Node* head = NULL;
    int pilihan, data, data_hapus;

    do{
        cout << endl;
        cout << "===== MENU LINKED LIST =====" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Tampil Data" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        if(pilihan == 1){
            cout << "Masukkan data: ";
            cin >> data;
            data_baru(head, data);
            cout << "Data berhasil ditambahkan." << endl;
        }
        else if(pilihan == 2){
            cout << "Data yang ingin dihapus: ";
            cin >> data_hapus;
            deleteNode(head, data_hapus);
        }
        else if(pilihan == 3){
            cout << "Linked List: ";
            printList(head);
        }
        else if(pilihan == 4){
            cout << "Program selesai." << endl;
        }
        else{
            cout << "Pilihan tidak valid." << endl;
        }

    }while(pilihan != 4);

    return 0;
}