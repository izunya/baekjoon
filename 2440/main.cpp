#include <iostream>
using namespace std;

int main(void){
    int i;
    cin >> i;
    while (i > 0) {
        for(int i2 = i; i2 > 0; i2--){
            cout << "*";
        }
        cout << endl;
        i--;
    }
    return 0;
}