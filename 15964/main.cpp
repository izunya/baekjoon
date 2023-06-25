#include <iostream>
using namespace std;

int main(){
    long long int a,b;
    cin >> a >> b;
    if(a <= 1000 && b <= 1000){
         cout << (a+b)*(a-b) << endl;
    }
}