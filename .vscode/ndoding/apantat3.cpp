#include <iostream>
using namespace std;

int main(){
    int matrik[3][3] = {
        {1, 3, 5},
        {5, 3, 1},
        {6, 2, 3}
    };

    printf("Matrik 3 x3\n");
    printf("===========\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%i ", matrik[i][j]);
        }
        printf("\n");
    }

    return 0;
}