#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a = 1,b = 2;
    while(true){
        if(a<b && a+b==n){
            cout << a<<" " << b;
            break;
        }
        a++;
        b++;
    }
    
    return 0;
}