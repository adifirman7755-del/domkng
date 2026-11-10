#include <iostream>
using namespace std;

int main(){
    char nilai[2];
    nilai[0] = 50;
    nilai[1] = 80;
    cout << "Nilai ke-1: " << nilai[0] << endl;
    
    char huruf[] = {'a', 'b', 'c', 'd'};
    cout << "Huruf ke-1: " << huruf[0] << endl;
    
    string kalimat[4] = {"Siapa", "10", "Bagaimana", "67"};
    cout << "Kalimat ke-1: " << kalimat[3] << endl;
    
    cout << "\nUbah nilai array" << endl;
    kalimat[0] = "Kenapa";
    cout << "Kalimat ke-1: " << kalimat[0] << endl;
    
    return 0;
}