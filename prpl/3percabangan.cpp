#include <iostream>
using namespace std;

int main(){
    float nilai;
    string grade;

    cout << "=== Program Grade Nilai ===" << endl;
    cout << "Inputkan nilai akhir: ";
    cin >> nilai;

    // menggunakan percabangan if/else/if
    if (nilai >= 80.01) {
        grade = "A";
    } else if (nilai >= 70.01) {
        grade = "B+";
    } else if (nilai >= 60.01) {
        grade = "B";
    } else if (nilai >= 50.01) {
        grade = "C+";
    } else if (nilai >= 40.01) {
        grade = "C";
    } else if (nilai >= 0.01) {
        grade = "D";
    } else { 
        grade = "E";
    }

    cout << "Grade anda: " << grade << endl;
    return 0;
}