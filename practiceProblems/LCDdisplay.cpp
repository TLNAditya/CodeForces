/*
Problem Description:1.6.4 LCD Display
PC/UVa IDs: 110104/706, Popularity: A, Success rate: average Level: 1
A friend of yours has just bought a new computer. Before this, the most powerful
machine he ever used was a pocket calculator. He is a little disappointed because he
liked the LCD display of his calculator more than the screen on his new computer! To
make him happy, write a program that prints numbers in LCD display style.
Input
The input file contains several lines, one for each number to be displayed. Each line
contains integers s and n, where n is the number to be displayed (0 ≤ n ≤ 99, 999, 999)
and s is the size in which it shall be displayed (1 ≤ s ≤ 10). The input will be terminated
by a line containing two zeros, which should not be processed.
Output
Print the numbers specified in the input file in an LCD display-style using s “-” signs
for the horizontal segments and s “|” signs for the vertical ones. Each digit occupies
exactly s + 2 columns and 2s + 3 rows. Be sure to fill all the white space occupied by
the digits with blanks, including the last digit. There must be exactly one column of
blanks between two digits.
Output a blank line after each number. You will find an example of each digit in the
sample output below.
Sample Input
2 12345
3 67890
0 0
Sample Output
-- -- --
| | || ||
| | || ||
-- -- -- --
|| | | |
|| | | |
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

// segments: [top, upper-left, upper-right, middle, lower-left, lower-right, bottom]
//            0     1           2            3       4           5            6
bool segments[10][7] = {
    {1,1,1,0,1,1,1}, // 0
    {0,0,1,0,0,1,0}, // 1
    {1,0,1,1,1,0,1}, // 2
    {1,0,1,1,0,1,1}, // 3
    {0,1,1,1,0,1,0}, // 4
    {1,1,0,1,0,1,1}, // 5
    {1,1,0,1,1,1,1}, // 6
    {1,0,1,0,0,1,0}, // 7
    {1,1,1,1,1,1,1}, // 8
    {1,1,1,1,0,1,1}, // 9
};

// Print one digit's specific row into a string
string renderDigit(int d, int row, int s) {
    string res = "";
    if(row == 0) {
        // top: " ---- "
        res += " ";
        res += segments[d][0] ? string(s, '-') : string(s, ' ');
        res += " ";
    }
    else if(row == 2*s+2) {
        // bottom
        res += " ";
        res += segments[d][6] ? string(s, '-') : string(s, ' ');
        res += " ";
    }
    else if(row == s+1) {
        // middle
        res += " ";
        res += segments[d][3] ? string(s, '-') : string(s, ' ');
        res += " ";
    }
    else if(row <= s) {
        // upper vertical section
        res += segments[d][1] ? "|" : " ";
        res += string(s, ' ');
        res += segments[d][2] ? "|" : " ";
    }
    else {
        // lower vertical section
        res += segments[d][4] ? "|" : " ";
        res += string(s, ' ');
        res += segments[d][5] ? "|" : " ";
    }
    return res;
}

int main(){
    int s;
    string n;
    while(cin >> s >> n && !(s==0 && n=="0")) {
        int rows = 2*s + 3;
        for(int row = 0; row < rows; row++) {
            string line = "";
            for(int i = 0; i < n.size(); i++) {
                int d = n[i] - '0';
                if(i > 0) line += " "; // one blank column between digits
                line += renderDigit(d, row, s);
            }
            cout << line << "\n";
        }
        cout << "\n"; // blank line after each number
    }
}