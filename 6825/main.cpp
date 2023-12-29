#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double w,h;
    cin >> w >> h;
    double bmi = w/pow(h,2);
    if (bmi > 25) cout << "Overweight" << "\n";
    else if (bmi >= 18.5) cout << "Normal weight" << "\n";
    else cout << "Underweight" << "\n";
    
}