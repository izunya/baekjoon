#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,d;
    int all;
    int a[30];
    cin >> n >> d;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        all += a[i];
    }
    int m = 100;
    for(int i = 0; i< n; i++){
        cout << a[i] * m << "\n";
    }
    
    return 0;
}