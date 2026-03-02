/*
Problem Description:
A common typing error is to place your hands on the keyboard one row to the right
of the correct position. Then “Q” is typed as “W” and “J” is typed as “K” and so on.
Your task is to decode a message typed in this manner.
Input
Input consists of several lines of text. Each line may contain digits, spaces, uppercase
letters (except “Q”, “A”, “Z”), or punctuation shown above [except back-quote (‘)].
Keys labeled with words [Tab, BackSp, Control, etc.] are not represented in the input.
Output
You are to replace each letter or punctuation symbol by the one immediately to its left
on the QWERTY keyboard shown above. Spaces in the input should be echoed in the
output.
Sample Input
O S, GOMR YPFSU/
Sample Output
I AM FINE TODAY.
*/
#include<iostream>
#include<unordered_map>
#include<string.h>
using namespace std;

int main(){
    unordered_map<char,char>info;
    info['O'] = 'I';
    info['S'] = 'A';
    info[',']= 'M';
    info['G'] = 'F';
    info['M'] = 'N';
    info['R'] = 'E';
    info['Y'] = 'T';
    info['P'] = 'O';
    info['F'] = 'D';
    info['U'] = 'Y';
    info['/'] = '.';
    info['W'] = 'Q';
    info['E'] = 'W';
    info['T'] = 'R';
    info['Y'] = 'T';
    info['D'] = 'S';
    info['F'] = 'D';
    info['['] = 'P';
    info['J'] = 'H';
    info['K'] = 'J';
    info['L'] = 'K';
    info[';'] = 'L';
    

    string s = "O S, GOMR YPFSU/";
    string r = "";
    for(int i = 0;i < s.size();i++){
        if(info[s[i]]){
            r+=info[s[i]];
        }
        
        else{
            r+=s[i];
        }
    }
    std::cout << r;
}