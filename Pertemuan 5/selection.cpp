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

    //Selection Sort Algorithm
    for(int i=0; i<n-1; i++){
        int min_index = i;
        for(int j=i+1; j<n; j++){
            if(dokumen[j] < dokumen[min_index]){
                min_index = j;
            }
        }
        if(min_index != i){
            temp                = dokumen[i];
            dokumen[i]          = dokumen[min_index];
            dokumen[min_index]  = temp;
        }
        cout<<"Step ke-"<<i+1<<": ";
        for(int k=0; k<n; k++){
            cout<<dokumen[k]<<" ";
        }
        cout<<endl;

    }




    cout<<"Data setelah diurutkan dengan Selection Sort;"<<endl;
    for(int i=0; i<n; i++){
        cout<<dokumen[i]<<" ";
    }
    return 0;
}