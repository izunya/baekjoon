#include <iostream>
using namespace std;

int main()
{
    int i;
    cin >> i;
    for (int n = 1; n <= i; n++)
    {
        for (int a = 1; a <= i - n; a++)
        {
            cout << " ";
        }

        for (int s = 1; s <= n; s++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}