#include <iostream>
using namespace std;

int main () {
    int data[10]= {1, 4, 2, 7, 8, 6, 9, 12, 13, 25};
    int cari, index=-1;

    cout<< "Sequential Search\n"<<endl;
    cout<< "==============="<<endl;
    cout<< "Masukkan data yang ingin dicari : ";
    cin>>cari;

    for (int i=0; i<10; i++){
        if (data[i] == cari){
            index = i;
        }
    }

    if(index!=-1){
        cout<<"Data Ditemukan pada indeks ke-"<<index<<endl;
        
    }

        cout<<"Data Tidak Ditemukan!!"<<endl;
    
    return 0;
}
