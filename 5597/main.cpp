#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[30];
    for (int i = 0; i < 30; i++){
        a[i] = i +1;
    }
    for(int i = 0; i < 28; i++){
        int n;
        cin >> n;
        a[n-1] = 0;
    }
    sort(a, a+30);
    for(int i = 0; i < 30; i++){
        if(a[i] != 0){
            cout << a[i] << "\n";
        }
    }
}