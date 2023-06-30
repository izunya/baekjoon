#include <iostream>
using namespace std;

int a[42];

int main(){
    int n;
    int count = 0;
    for(int i = 0; i < 10; i++){
        cin >> n;
        a[n % 42] = 1;
    }
    for(int i = 0; i < 42; i++){
        count += a[i];
    }
    cout << count;
    return 0;
}