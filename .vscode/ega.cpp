#include <iostream>
using namespace std;

int main() {
    int a;

    // pengisian nilai dengan operator =
    a = 10;

    // pengisian sekaligus penambahan
    a += 20; // ini sama seperti a = a + 10
    cout << "Hasil a += 10 adalah " << a << endl;

    // pengisian sekaligus pengurangan
    a -= 10; // ini sama seperti a = a - 10
    cout << "Hasil a -= 10 adalah " << a << endl;

    // pengisian sekaligus perkalian
    a *= 10; // ini sama seperti a = a * 10
    cout << "Hasil a *= 10 adalah " << a << endl;

    // pengisian sekaligus pembagian
    a /= 10; // ini sama seperti a = a / 10
    cout << "Hasil a /= 10 adalah " << a << endl;

    // pengisian sekaligus modulus
    a %= 10; // ini sama seperti a = a % 10
    cout << "Hasil a %= 10 adalah " << a << endl;

    return 0;
}