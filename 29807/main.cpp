#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int t,res = 0;
    cin >> t;
    int s[5];
    for(int i = 0; i < t; i++){
        cin >> s[i];
    }
    if (t < 5){
        for(int i = t; i < 5; i++){
            s[i] = 0;
        }
    }
    if (s[0] > s[2]){
        res += (s[0] - s[2]) * 508;
    }else if (s[0] < s[2]){
        res += abs(s[0] - s[2]) * 108;
    }
    if (s[1] > s[3]){
        res += (s[1] - s[3]) * 212;
    }else if (s[1] < s[3]){
        res += abs(s[1] - s[3]) * 305;
    }
    if (s[4] > 0){
        res += s[4] * 707;
    }
    cout << res * 4763 << "\n";
}