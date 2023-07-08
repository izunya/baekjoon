#include <iostream>
using namespace std;

int main(){
    int acc1,acc2;
    int price;
    cin >> acc1 >> acc2 >> price;
    if((acc1+acc2) < price*2){
        cout << acc1+acc2;
    }else{
        cout << acc1+acc2 - price*2;
    }
}