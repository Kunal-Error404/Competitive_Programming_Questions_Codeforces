#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*It uses a simple logic, if i cant divide the initial number of cards 3 ways there is no way for me to make 
equal cards in 3 decks.In this problem i dont have to check the permutations else i would have taken the average of the three decks
and then subtracted the average from the deck having the most amount of cards and would have distributed them in other decks*/
void solve(){
    long long a,b,c;
    cin >> a >> b >> c;
    long long avg = (a+b+c)/3;
    if((a+b+c)%3==0 && b<=avg && b<c){//we cant reduce the second largest deck and average is always less than the largest one
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }


    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 0;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}