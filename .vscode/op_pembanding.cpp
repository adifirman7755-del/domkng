#include <iostream>
using namespace std;

int main(){
    int a , b;
    cout << "Inputkan nilai a :";
    cin >> a;
    cout << "Inputkan nilai b :";
    cin >> b;
    bool hasil;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    hasil = a > b;
    cout << "a > b = " << hasil << endl;

    hasil = a < b;
    cout << "a < b = " << hasil << endl;

    hasil = a >= b;
    cout << "a >= b = " << hasil << endl;

    hasil = a <= b;
    cout << "a <= b = " << hasil << endl;

    hasil = a == b;
    cout << "a == b = " << hasil << endl;

    hasil = a != b;
    cout << "a != b = " << hasil << endl;
    
    hasil = a != b;
    cout << "a != b = " << hasil << endl;
    return 0;
}