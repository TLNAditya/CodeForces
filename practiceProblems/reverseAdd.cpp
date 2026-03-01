/*
nput
The first line will contain an integer N (0 < N ≤ 100), giving the number of test cases,
while the next N lines each contain a single integer P whose palindrome you are to
compute.
Output
For each of the N integers, print a line giving the minimum number of iterations to find
the palindrome, a single space, and then the resulting palindrome itself.
Sample Input
3
195
265
750
Sample Output
4 9339
5 45254
*/
#include<iostream>
#include<cmath>
#include<utility>
using namespace std;

int reverse(int n){
    int remainder = 0;
    while(n>0){
        int digit = n%10;
        remainder = remainder*10 + digit;
        n /= 10;
    }
    return remainder;
}

pair<int,long> reverseAdd(int n){
    long long sum = n;
    int count = 0;

    while(sum != reverse(sum)){
        sum += reverse(sum);
        count++;
    }

    return {count, sum};
}

int main(){
    int n;
    cin >> n;
    while(n--){
        int value;
        cin >> value;
        pair<int,long>result = reverseAdd(value);
        cout << result.first << " " << result.second <<endl;
    
    }
    return 0;
}