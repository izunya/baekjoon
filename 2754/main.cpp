#include <iostream>
using namespace std;

int main()
{
    // C언어 성적
    // A+: 4.3, A0: 4.0, A-: 3.7
    // B+: 3.3, B0: 3.0, B-: 2.7
    // C+: 2.3, C0: 2.0, C-: 1.7
    // D+: 1.3, D0: 1.0, D-: 0.7
    // F: 0.0
    string s;
    cin >> s;
    double a;
    switch (s[0])
    {
    case 'A':
        if (s[1] == '+')
        a = 4.3;
        else if (s[1] == '0')
        a = 4.0;
        else
        a = 3.7;
        break;
    case 'B':
        if (s[1] == '+')
        a = 3.3;
        else if (s[1] == '0')
        a = 3.0;
        else
        a = 2.7;
        break;
    case 'C':
        if (s[1] == '+')
        a = 2.3;
        else if (s[1] == '0')
        a= 2.0;
        else
        a = 1.7;
        break;
    case 'D':
        if (s[1] == '+')
        a = 1.3;
        else if (s[1] == '0')
        a = 1.0;
        else
        a = 0.7;
        break;
    case 'F':
        a = 0.0;
        break;
    default:
        break;
    }
    printf("%.1lf", a);
}