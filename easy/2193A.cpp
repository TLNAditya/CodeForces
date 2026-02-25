#include<vector>
#include<iostream>
using namespace std;
// the problems allows unlimited addition operations on any the sum..
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n,s,x;
        cin >> n >> s >> x;
        vector<int>arr(n);
        for(int i = 0;i < n;i++){
            cin >> arr[i];
        }
        int sum = 0;
        for(auto i : arr){
            sum += i;
        }
        /*
        initial sum = sum;
        k be operations * x + initial sum = s;
        */
       if(sum>s){
        cout << "No\n";
       }
       else if((s-sum)%x==0){
        cout << "Yes\n";
       }
       else{
        cout << "No\n";
       }
    }
    return 0;

}

/*
Problem:219A DBMS and ARRay
Difficulty:800
Core trick:to check if (required sum - array sum) % x ==0, as it returns it's possible to achieve the s with (k*x) operations;
Why greedy works: it's not greedy,just a simple maths observation
What fooled me: i thought just adding x to array sum would work, but i didn't notice that it allows infinite operatios of x
What signal should I notice next time: key terms like infinite or any number of times etc..
*/