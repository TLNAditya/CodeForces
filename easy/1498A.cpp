#include <iostream>
using namespace std;

long long gcd(long long a, long long b){
    while(b){
        a %= b;
        swap(a,b);
    }
    return a;
}

long long digitSum(long long n){
    long long sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

long long solve(long long n){
    while(true){
        long long s = digitSum(n);
        if(gcd(n, s) > 1) return n;
        n++;
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        cout << solve(n) << endl;
    }
}