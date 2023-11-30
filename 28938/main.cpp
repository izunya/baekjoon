#include <iostream>
using namespace std;

int main(){
    int a,n = 0;
    cin >> a;
    int b[a];
    for (int i = 0; i < a; i++){
        cin >> b[i];
        n += b[i];
    }
    if (n == 0){
        cout << "Stay" << "\n";
    }else if (n > 0){
        cout << "Right" << "\n";
    }else if ( n < 0 ){
        cout << "Left" << "\n";
    }
}