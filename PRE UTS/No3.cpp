#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("cls");
    int baris;
    
    cout << "INPUT : ";
    cin >> baris;
    
    for(int  i = 0; i < baris; i++) {
        int nilai = 1;
        
        for(int j = 0; j <= i; j++) {
            cout << nilai;
            if(j < i) {
                cout<< "  ";
                
            }
            nilai = nilai * (i - 1) / (j + 1);
         }
        cout << endl;
    }
    
}