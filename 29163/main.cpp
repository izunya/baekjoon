#include <iostream>

using namespace std;

int main(){
    int a,b = 0;
    cin >> a;
    int n[a];
    for(int i = 0; i < a; i++){
        cin >> n[i];
        if (n[i] % 2 == 0) {
            b += 1;
        }
    }
    if (b >= a){
        cout << "Happy" << "\n";
    }else{
        cout << "Sad" << "\n";
    }
}