/*— Shizuku Hoshikawa
Kaori wants to spend the day with Shizuku! However, the zoo is closed, so they are visiting Farmer John's farm instead.

At Farmer John's farm, Shizuku counts n
 legs. It is known that only chickens and cows live on the farm; a chicken has 2
 legs, while a cow has 4
.

Count how many different configurations of Farmer John's farm are possible. Two configurations are considered different if they contain either a different number of chickens, a different number of cows, or both.

Note that Farmer John's farm may contain zero chickens or zero cows.

Input
The first line contains a single integer t
 (1≤t≤100
)  — the number of test cases.

The only line of each test case contains a single integer n
 (1≤n≤100
).

Output
For each test case, output a single integer, the number of different configurations of Farmer John's farm that are possible.

Example
InputCopy
5
2
3
4
6
100
OutputCopy
1
0
2
2
26
Note
For n=4
, there are two possible configurations of Farmer John's farm:

he can have two chickens and zero cows, or
he can have zero chickens and one cow.
It can be shown that these are the only possible configurations of Farmer John's farm.
For n=3
, it can be shown that there are no possible configurations of Farmer John's farm.
*/

#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n = 0;
    cin >> n;
    int c = n/4;
    int count = 0;
    for(int i = c;i>=0;i--){
        int remlegs = n - (i*4);
        if(remlegs%2==0){
            count++;
        }
    }
    cout << count << "\n";
}
int main(){
    int t = 0;
    ios::sync_with_stdio(false);//fast i/0 
    cin.tie(nullptr);
    cin >> t;//input no.of testcases
    while(t--){//test case loop;
        solve();
    }
    
    return 0;
}


