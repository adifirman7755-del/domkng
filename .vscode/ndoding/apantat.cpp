#include <iostream>
using namespace std;

int main(){
    char huruf[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    
    // mengambil data pada array
    cout << "Hanya salah satu huruf" << endl;
    cout << "- Huruf ke-3: " << huruf[2] << endl;
    cout << endl;
    
    // mengambil semua data (nilai) pada array
    cout << "Semua huruf pada array huruf" << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "- Huruf ke-" << (i+1) << ": " << huruf[i] << endl;
    }
    
    return 0;
}