#include <iostream>
using namespace std;

int main(){
    char a[15][15];
    for(int i = 0; i< 15; i++){
        for(int j = 0; j < 15; j++){
            cin >> a[i][j];
        }
    }
    int chunbae = 0, nabi = 0, yeongcheol = 0;
    for(int i = 0; i< 15; i++){
        for(int j = 0; j < 15; j++){
            if(a[i][j] == 'w') chunbae++;
            else if (a[i][j] == 'b') nabi++;
            else if (a[i][j] == 'g') yeongcheol++;
        }
    }
    if (chunbae > nabi && chunbae > yeongcheol) {
        cout << "chunbae" << "\n";
    }else if (nabi > chunbae && nabi > yeongcheol) {
        cout << "nabi" << "\n";
    }else if (yeongcheol > chunbae && yeongcheol > nabi) {
        cout << "yeongcheol" << "\n";
    } 
}