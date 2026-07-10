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
    cout<< "NULL"<< endl;
}

void deleteNode(Node*& head, int key){
    Node* temp = head;
    Node* prev = NULL;

    if(temp != NULL && temp->data == key){
        head = temp->next;
        delete temp;
        return;
    }

    while(temp != NULL && temp->data != key){
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL){
        cout<<"Data"<<key<<"tidak ditemukan dalam linked list."<<endl;
        return;
    }
    prev->next = temp->next;
    delete temp;
    cout<<"Data "<<key<<" berhasil dihapus dari linked list."<<endl;
}

int main(){
    Node* head = NULL;

    // Tambah Data
    data_baru(head,3);
    data_baru(head,7);
    data_baru(head,9);

    // Cetak Linked List
    cout<< "Linked List: ";
    printList(head);

    // Hapus Data
    int data_hapus;
    cout << "Data yang ingin dihapus: ";
    cin >> data_hapus;
    deleteNode(head, data_hapus);

    // Cetak Linked List setelah penghapusan
    cout<< "Linked List: ";
    printList(head);
    return 0;
}