#include <iostream>
#include <string>
using namespace std;

int main(){
    int a;
    cin >> a;
    for (int i =0; i< a; i++){
        string s;
        cin >> s;
        int score = 0;
        int count = 0;
        for (int j = 0; j < s.length(); j++){
            if (s[j] == 'O'){
                count++;
                score += count;
            }
            else{
                count = 0;
            }
        }
        cout << score << "\n";
    }
}