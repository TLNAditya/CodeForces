#include<iostream>
using namespace std;

int countFibonnaci(long long i,long long j){
    long long a = 0,b = 1;
    long long sum = 0;
    int count = 0;
    while (sum <=j)
    {
        /* code */
        sum = a+b;
        if(i <= sum && sum <= j){
            count++;
        }
        a = b;
        b = sum;
    }
    return count;
    
}

int main(){
    long long i,j;
    while(cin >> i >> j && !(i==0 && j==0)){
        int count = countFibonnaci(i,j);
        cout << count << endl;
    }
    return 0;
}