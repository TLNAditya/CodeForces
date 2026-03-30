#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool one = false;
        bool sixty = false;
        while(n--){
            int a;
            cin >> a;
            
            if(a==1)one = true;
            if(a==67)sixty = true;
            
        }
        if(one && sixty)cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}