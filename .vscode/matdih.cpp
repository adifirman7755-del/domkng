// Masukan : anggota himpunan A
// Keluaran: satu contoh relasi R yang bersifat refleksif, menghantar, dan setangkup
//
// Kompilasi: g++ -std=c++17 -o relasi_generator relasi_generator.cpp
 
#include <iostream>
#include <set>
#include <string>
#include <utility>
#include <vector>
 
using namespace std;
 
using Relasi = vector<pair<int, int>>;
 
void cetak(const vector<string>& A, const Relasi& R) {
    cout << "R = {";
    for (size_t k = 0; k < R.size(); k++) {
        if (k > 0) cout << ", ";
        cout << "(" << A[R[k].first] << "," << A[R[k].second] << ")";
    }
    cout << "}\n";
}
 
int main() {
    int n;
    cout << "Jumlah anggota himpunan A: ";
    while (!(cin >> n) || n < 1) {
        if (cin.eof()) return 1;
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Isi bilangan bulat minimal 1: ";
    }
 
    vector<string> A;
    set<string> sudahAda;
    cout << "Masukkan " << n << " anggota A (pisahkan dengan spasi):\n";
    while ((int)A.size() < n) {
        string x;
        if (!(cin >> x)) return 1;
        if (!sudahAda.insert(x).second) {
            cout << "Anggota " << x << " sudah ada, masukkan anggota lain.\n";
            continue;
        }
        A.push_back(x);
    }
 
    cout << "\nA = {";
    for (int i = 0; i < n; i++) cout << (i ? ", " : "") << A[i];
    cout << "}\n";
 
    // a) Refleksif: setiap anggota berelasi dengan dirinya sendiri, (a,a) di R.
    Relasi refleksif;
    for (int i = 0; i < n; i++) refleksif.push_back({i, i});
 
    // b) Menghantar: R = {(ai,aj) | i < j}, urutan sesuai masukan.
    //    Jika (ai,aj) dan (aj,ak) di R maka i < j < k, sehingga (ai,ak) di R.
    Relasi menghantar;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++) menghantar.push_back({i, j});
 
    // c) Setangkup: pasangan anggota bersebelahan, dua arah.
    //    Setiap (ai,ai+1) di R selalu disertai (ai+1,ai).
    Relasi setangkup;
    for (int i = 0; i + 1 < n; i++) {
        setangkup.push_back({i, i + 1});
        setangkup.push_back({i + 1, i});
    }
 
    cout << "\na) R bersifat refleksif\n   ";
    cetak(A, refleksif);
    cout << "\nb) R bersifat menghantar\n   ";
    cetak(A, menghantar);
    cout << "\nc) R bersifat setangkup\n   ";
    cetak(A, setangkup);
 
    return 0;
}
 