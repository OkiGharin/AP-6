#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("cls");
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