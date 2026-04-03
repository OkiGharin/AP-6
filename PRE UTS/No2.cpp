#include <iostream>
using namespace std;

int main() {
    int angka, kuadrat, jumlahDigit = 0;
    
    cout << "INPUT : ";
    cin >> angka;
    
    kuadrat = angka * angka;
    
    int temp = kuadrat;
    
    if(temp == 0) {
        jumlahDigit = 0;
    } else {
        while(temp > 0) {
            jumlahDigit += temp % 10;
            temp /= 10;
        }
    }
    
     if(angka < 0) {
       
    }
    
    if(jumlahDigit == angka) {
        cout << "angka neon" << endl;
    } else {
        cout << "bukan angka neon" << endl;
    }
       
}