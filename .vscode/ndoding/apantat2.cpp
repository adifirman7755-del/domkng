#include <iostream>
#include <array>
using namespace std;

int main(){
    array<string, 5> nama = {"Ali", "Abi", "Ami", "Mia", "Nia"};
    
    printf("Ada %d data di dalam array:\n", nama.size());
    
    for(int i = 0; i < nama.size(); i++){
        cout << (i+1) << ". " << nama[i] << endl;
    }
    
    return 0;
}