#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s,t;
        cin >> s >>t;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s == t){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}