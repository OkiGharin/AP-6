#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "INPUT : ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            
            char alphabet = (char)(64 + i);
            cout << alphabet;
        }
        
        cout << endl;
    }
}