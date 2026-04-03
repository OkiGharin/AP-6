#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("cls");
    int a, b, fpb;
    
    cout << "INPUT : ";
    cin >> a >> b;
    
    for(int i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            fpb = i;
        }
    }
    cout << "OUTPUT : " << fpb << endl;
}