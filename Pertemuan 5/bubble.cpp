#include <iostream>
using namespace std;
int main() {
    int dokumen[10] = {9,3,7,1,2,6,12,13,21,25};
    int temp, n = sizeof(dokumen)/sizeof(dokumen[0]);

    cout<<"Tampilan data awal;"<<endl;
    for(int i=0; i<n; i++){
        cout<<dokumen[i]<<" ";
    }
    cout<<endl;

    //Bubble Sort Algorithm
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(dokumen[j] > dokumen[j+1]){
                temp            = dokumen[j];
                dokumen[j]      = dokumen[j+1];
                dokumen[j+1]    = temp;
            }
        }
        cout<<"Step ke-"<<i+1<<": ";
        for(int k=0; k<n; k++){
            cout<<dokumen[k]<<" ";
        }
        cout<<endl;

    }

    cout<<"Data setelah diurutkan dengan Bubble Sort;"<<endl;
    for(int i=0; i<n; i++){
        cout<<dokumen[i]<<" ";
    }
    return 0;
}