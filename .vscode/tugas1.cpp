#include <iostream>
using namespace std;
int main ()
 {
    string panggilan;
    double umur;

    cout << "Masukan nama lengkap :";
    getline(cin, panggilan);

    cout << "Masukan umur anda ";
    cin >> umur; 

    cout << "Hai...!! Saya " << panggilan << endl;
    cout << "Umur saya "<< umur << "tahun";
    return 0;
}