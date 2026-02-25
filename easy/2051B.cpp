#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;

        long long cycle_sum = a + b + c;

        long long full_cycles = n / cycle_sum;
        long long days = full_cycles * 3;
        long long covered = full_cycles * cycle_sum;

        long long remaining = n - covered;

        if (remaining == 0) {
            cout << days << "\n";
        } 
        else if (remaining <= a) {
            cout << days + 1 << "\n";
        } 
        else if (remaining <= a + b) {
            cout << days + 2 << "\n";
        } 
        else {
            cout << days + 3 << "\n";
        }
    }
}