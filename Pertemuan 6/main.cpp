#include <iostream>
using namespace std;    
int main() {
    int var = 10;
    int *p;
    p = &var;

    *p = 120;

    cout << "Nilai Var: " << var << endl;
    cout << "Alamat Var: " << p << endl;
    cout << "Nilai *p: " << *p << endl;
    cout << "Data p: " << p << endl;
    cout << "Alamat p: " << &p << endl;




    return 0;
}