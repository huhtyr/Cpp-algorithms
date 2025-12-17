#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <algorithm>
#include <climits>
#include <unordered_map>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using piii = pair<int, pair<int, int>>;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        int e = min(a, b);
        int f = max(a, b);
        if(f > (2*e) + 2){
            cout<<"NO"<<endl;
            continue;
        }
        c -= a;
        d -= b;
        e = min(c, d), f = max(c, d);
        if(f > (2*e) + 2){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES";
        cout<<endl;
    }
    return 0;

}