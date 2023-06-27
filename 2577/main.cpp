#include <iostream>
using namespace std;

int arr[10];

int main(){
    int a,b,c;
    int res;
    cin >> a >> b >> c;
    res = a * b * c;
    for(int i = res; i > 0; i/=10){
        arr[i%10]++;
    }
    for(int i = 0; i< 10; i++){
        cout << arr[i] << "\n";
    }
}