#include<iostream>
using namespace std;
/*
create a sequence of length n by alternating integers x and -x,starting with x.
if n = 5: x,-x,x,-x,x, sum : x
if n = 4: x,-x,x,-x, sum:0
so if n%2==0: sum = 0;
else:
x;
given 1<=x<=10; so we need not to worry about negative values and zeroes.
*/

int main(){
    int t;
    cin >>t;
    while(t--){
        int x,n;
        cin >> x >> n;
        if(n%2==0){
            cout << 0 <<endl;
        }
        else{
            cout << x << endl;
        }
    }
    return 0;
}