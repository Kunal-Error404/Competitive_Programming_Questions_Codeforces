#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(){
    int g,c,l;
    g=c=l=0;
    cin >> g >> c >> l;
    vector<int> v={g,c,l};
    int max = *(max_element(v.begin(),v.end()));
    int min =*(min_element(v.begin(),v.end()));
    if((max-min) >= 10){
        cout << "check again\n";
        
    }
    else{
        sort(v.begin(),v.end());
        cout << "final " << v[1] << "\n";
        
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();//was using a test case loop which wasnt required by the question.....so got 3 errors while submitting
  
    return 0;

}