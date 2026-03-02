#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        bool found = false;

        for (long long x = 2; x <= 100; x++) {  // checking first 100 is enough
            for (int j = 0; j < n; j++) {
                if (gcd(arr[j], x) == 1) {
                    cout << x << "\n";
                    found = true;
                    break;
                }
            }
            if (found) break;
        }

        if (!found) cout << -1 << "\n";
    }

    return 0;
}