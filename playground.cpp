#include <iostream>

using namespace std;


int main() {

    system("cls");

    int a = 5;
    double b = 3.14;

    cout << a << endl;   // a === *(&a)
    cout << &a << endl;
    cout << (long int)(&a) << endl;
    cout << &b << endl;
    cout << *(&b) << endl;

    cout << sizeof(&a) << endl;
    cout << sizeof(a) << endl;

    /*
        sizeof(m1)  = 8 byte
        sizeof(int) = 4 byte
        sizeof(long int) = 8 byte
    */
}