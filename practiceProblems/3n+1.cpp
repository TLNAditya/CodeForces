#include <iostream>
#include <algorithm>
using namespace std;

int cycleLength(long long n) {
    int count = 1;
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        count++;
    }
    return count;
}

int main() {
    int i, j;
    while (cin >> i >> j) {
        int lo = min(i, j);
        int hi = max(i, j);
        int maxCycle = 0;
        for (int k = lo; k <= hi; k++)
            maxCycle = max(maxCycle, cycleLength(k));
        cout << i << " " << j << " " << maxCycle << endl;
    }
}