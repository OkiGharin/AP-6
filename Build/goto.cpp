#include <iostream>
using namespace std;

int main() {
    //laboratorium Ilmu Komputer

    // goto a;
    // b:
    // cout << "ilmu";
    // goto c;

    // a:
    // cout << "laboratorium";
    // goto b;
    
    // c:
    // cout << " komputer";

    //label :
    //goto label;


    int a = 1;

    x :
    cout << a << endl;
    a++; //1 increment (+1) = 2

    if (a <= 10) {
        goto x;
    }
}