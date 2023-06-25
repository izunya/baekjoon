#include <iostream>
using namespace std;


int main()
{
    int n, mx = 0, idx = 0;
    for(int i = 1; i <= 9; i++){
        cin >> n;
        if(n > mx){
            mx = n;
            idx = i;
        }
    }
    cout << mx << endl << idx << endl;
}