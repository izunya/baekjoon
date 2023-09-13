#include <iostream>
using namespace std;

int main(){
    int h,m,s,a;
    cin >> h >> m >> s >> a;

    cout << (h + (m + (s + a) / 60) / 60) % 24 << " " << (m + (s + a) / 60) % 60 << " " << (s + a) % 60 << endl;
    
}