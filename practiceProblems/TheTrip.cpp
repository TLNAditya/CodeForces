/*
Problem Description:
PC/UVa IDs: 110103/10137, Popularity: B, Success rate: average Level: 1
A group of students are members of a club that travels annually to different locations. Their destinations in the past have included Indianapolis, Phoenix, Nashville,
Philadelphia, San Jose, and Atlanta. This spring they are planning a trip to Eindhoven.
The group agrees in advance to share expenses equally, but it is not practical to share
every expense as it occurs. Thus individuals in the group pay for particular things, such
as meals, hotels, taxi rides, and plane tickets. After the trip, each student’s expenses
are tallied and money is exchanged so that the net cost to each is the same, to within
one cent. In the past, this money exchange has been tedious and time consuming. Your
job is to compute, from a list of expenses, the minimum amount of money that must
change hands in order to equalize (within one cent) all the students’ costs.
Input
Standard input will contain the information for several trips. Each trip consists of a
line containing a positive integer n denoting the number of students on the trip. This is
followed by n lines of input, each containing the amount spent by a student in dollars
and cents. There are no more than 1000 students and no student spent more than
$10,000.00. A single line containing 0 follows the information for the last trip.
Output
For each trip, output a line stating the total amount of money, in dollars and cents,
that must be exchanged to equalize the students’ costs.
Sample Input
3
10.00
20.00
30.00
4
15.00
15.01
3.00
3.01
0
Sample Output
$10.00
$11.99
*/
#include<iostream>
#include<vector>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
    int n;
    while(cin >> n && n != 0){
        vector<int> prices; // store in CENTS
        int sum = 0;

        for(int i = 0; i < n; i++){
            float x;
            cin >> x;
            int cents = (int)round(x * 100); // convert to cents immediately
            prices.push_back(cents);
            sum += cents;
        }

        int split = sum / n; // fair share in cents (floor)
        int total = 0;

        for(auto p : prices){
            if(p < split){
                total += split - p;
            }
        }

        cout << "$" << fixed << setprecision(2) << total / 100.0 << endl;
    }
}
/*```

**Why this works for the example:**
```
prices in cents: 1500, 1501, 300, 301
sum = 3602 cents
split = 3602 / 4 = 900 cents (integer floor division)

1500 >= 900 → skip
1501 >= 900 → skip
300  <  900 → total += 600
301  <  900 → total += 599

total = 1199 cents = $11.99 ✓
*/