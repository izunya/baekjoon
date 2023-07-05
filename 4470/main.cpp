#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a; 
    char b[a];
    char c;
    for(int i = 0; i< a; i++){
        cin >> c;
        b[i] = c;
    }
    for(int i = 0; i< a; i++){
        cout << i+1 << ". " << b[i] << "\n";
    }
}