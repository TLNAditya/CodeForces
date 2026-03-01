#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;

    // Read until EOF
    while (getline(cin, a) && getline(cin, b)) {

        int freqA[26] = {0};
        int freqB[26] = {0};

        // Count frequency in a
        for (char c : a)
            freqA[c - 'a']++;

        // Count frequency in b
        for (char c : b)
            freqB[c - 'a']++;

        // Print minimum frequency in sorted order
        for (int i = 0; i < 26; i++) {
            int common = min(freqA[i], freqB[i]);
            while (common--) {
                cout << char(i + 'a');
            }
        }

        cout << endl;
    }

    return 0;
}