#include <iostream>
#include <cstring>
using namespace std;
#define C 26
char a[1000000];
int arr[C];

int main(){
    int max = 0;
    int size;
    char ser;
    cin >> a;
    size = strlen(a);

    for (int i =0;i<size;i++){
        if(a[i]>='a') arr[a[i]-'a']++;
        else arr[a[i]-'A']++;
    }
    for(int i =0;i<C;i++){
        if(arr[i]==max){
            ser = '?';
        }else if(arr[i] > max){
            max = arr[i];
            ser = 'A'+i;
        }
    }
        cout << ser << "\n";
}