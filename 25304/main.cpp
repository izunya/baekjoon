#include <iostream>

using namespace std;

int main()
{
    int res = 0,cash,i;
    cin >> cash >> i;
    while(i--){
        int m,r;
        cin >> m >> r;
        res += m * r;
    }
    if(res == cash) cout << "Yes" << "\n";
    else cout << "No" << "\n";
    
    return 0;
}