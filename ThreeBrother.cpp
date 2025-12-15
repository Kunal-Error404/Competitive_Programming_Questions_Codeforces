#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int a,b;
    cin >> a >> b;
    vector<int> v = {1,2,3};
    auto it1 =find(v.begin(),v.end(),a);
    v.erase(it1);
    auto it2 =find(v.begin(),v.end(),b);
    v.erase(it2);
    cout << v[0];
    
    return 0;
}