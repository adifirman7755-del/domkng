#include <iostream>
using namespace std;

int main(){
    string password;

    cout << "========= Login =========" << endl;
    
    // Perulangan akan terus berjalan selama password TIDAK SAMA DENGAN "p"
    while (true) {
        cout << "Masukan password: ";
        cin >> password;

        if (password == "p"){
            cout << "WEH TUAN MUDA NIH!" << endl;
            cout << "ANJAY TQ WAK!" << endl;
            cout << "ADAKAH 100!" << endl;
            cout << "ADAKAH 100!" << endl;
            cout << "ADAKAH 100!" << endl;
            cout << "ADAKAH 100!" << endl;
            cout << "ADAKAH 100!" << endl;
            cout << "ADAKAH 100!" << endl;
            cout << "ADAKAH 100!" << endl;
            cout << "ADAKAH 100!" << endl;
            cout << "ADAKAH 100!" << endl;
            cout << "ADAKAH 100!" << endl;
            cout << "ADAKAH 100!" << endl;
            cout << "ADAKAH 100!" << endl;
            cout << "ADAKAH 100!" << endl;
            break; // Keluar dari perulangan jika password benar
        } else {
            cout << "WOI PASSWORD KAU SALAH!" << endl;
            cout << "BALEK KAU NGISI ULANG SANA!" << endl;
            cout << "-------------------------" << endl;
        }
    }

    return 0;
}