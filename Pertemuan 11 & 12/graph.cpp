#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

Node* root = nullptr;

Node* insert(Node* root, int value) {
    if (root == nullptr) {
        return new Node(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } 
    else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

void inOrder(Node* root) {
    if (root == nullptr) 
        return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node* root) {
    if (root == nullptr) 
        return;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void preOrder(Node* root) {
    if (root == nullptr) 
        return;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void printTree(Node* root, int space = 0) {
    if(root == nullptr) 
        return;

    space += 8;
    printTree(root->right, space);
    cout << endl;

    for (int i = 8; i < space; i++){
        cout << " ";
    }

    cout << root->data << endl;
    printTree(root->left, space);
}

int main() {
   int jumlah, data;

   cout<<"==============================="<<endl;
   cout<<"  Program Binary Search Tree  "<<endl;
   cout<<"==============================="<<endl;
   cout<<"Masukkan jumlah Node: ";
   cin >> jumlah;
   for(int i=1; i<= jumlah; i++){
       cout<<"Masukkan Node ke-"<<i<<" : ";
       cin >> data;
       root = insert(root, data);
   }

    cout<<"Bentuk Visualisasi Tree : "<<endl;
    printTree(root);
    cout<<endl<<endl;

    cout<<"PreOrder: "; preOrder(root); cout<<endl;
    cout<<"InOrder: "; inOrder(root); cout<<endl;
    cout<<"PostOrder: "; postOrder(root); cout<<endl;

    return 0;
}