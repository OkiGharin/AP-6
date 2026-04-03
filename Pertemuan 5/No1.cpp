#include <iostream>
using namespace std;

int main() {
    int angka[5];
    
    cout << "INPUT 5 ANGKA DENGAN SPASI : ";
    
    
    for(int i = 0; i < 5; i++) {
        cin >> angka[i];
    }
    
    cout << "output : ";
    
    for(int i = 4; i >= 0; i--) {
        cout << angka[i];
        if(i > 0) {
            cout << " ";
        }
    }    
}