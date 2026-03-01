#include<iostream>
using namespace std;
int carryCount(int a, int b){
    int carry = 0,carrycount = 0;
    while(a>0||b>0){
        int x = a%10;
        int y = b%10;
        if(x+y+carry>=10){
            carry = 1;
            carrycount++;
        }
        else{
            carry = 0;
        }
        a /= 10;
        b /= 10;
    }
    return carrycount;
}
int main(){
    int a,b;
    while(cin >> a >> b && !(a == 0 && b==0)){
        int count = carryCount(a,b);
        if(count == 0){
            cout << "No carry operations." <<endl;
        }
        else{
            cout << count << " carry operations." <<endl;
        }
        
    }
    return 0;
    
}