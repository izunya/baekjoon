#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a; 
    cin.ignore();
    for(int i = 1; i<= a; i++){
        string b;
        getline(cin, b);
        printf("%d. ", i);
        cout << b << "\n";
    }
}