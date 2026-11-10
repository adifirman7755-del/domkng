#include <iostream>
using namespace std;

int main(){
    int hasil[3][3];
    int jumlah = 0;
    int matrik[2][3][3] = {
        {{1, 3, 5}, {5, 3, 1}, {6, 2, 3}},
        {{3, 4, 1}, {5, 2, 7}, {2, 1, 6}}
    };

    // perulangan untuk baris laci berkas
    for (int a = 0; a < 2; a++) {
        printf("Matrik ke-%i\n", (a+1));
        printf("===========\n");
        
        // perulangan untuk kolom laci berkas
        for (int i = 0; i < 3; i++) {
            
            // perulangan untuk partisi laci berkas
            for (int j = 0; j < 3; j++) {
                printf("%i ", matrik[a][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    // proses perkalian matrik ke-1 dan ke-2
    for( int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int z = 0; z < 3; z++){
                jumlah += matrik[0][i][z] * matrik[1][z][j];
            }
            hasil[i][j] = jumlah;
            jumlah = 0;
        }
    }

    printf("Hasil Perkalian\n");
    printf("===============\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%i ", hasil[i][j]);
        }
        printf("\n");
    }

    return 0;
}