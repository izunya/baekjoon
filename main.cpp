#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int a;
    cin >> a;
    int b[100001][100001];
    for(int i=0;i<a;i++){
        int x,y;
        cin >> x >> y;
        b[a][0] = x;
        b[a][1] = y;
    }
    cout << b[0] << "\n";
}