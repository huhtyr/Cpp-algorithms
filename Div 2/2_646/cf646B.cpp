#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
#include <climits>
#include <cmath>
#include <numeric>
#include <unordered_map>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using piii = pair<int, pair<int, int>>;

void solve(){
    string s;
    cin>>s;
    int m = s.size();
    vi pre(m), suf(m);
    if(s[0] == '1')   pre[0] = 1;   //cnt of 1 from left end
    if(s[m-1] == '1')    suf[m-1] = 1;  //cnt of 1 from right end
    for(int i = 1; i < m; i++){
        if(s[i] == '1')    pre[i] = pre[i-1] + 1;
        else    pre[i] = pre[i-1];;
    }
    for(int i = m-2; i >= 0; i--){
        if(s[i] == '1')    suf[i] = suf[i+1] + 1;
        else    suf[i] = suf[i+1];
    }
    int cost = INT_MAX;
    //all zeros or all ones
    cost = min(pre[m-1], m-pre[m-1]);
    //for 000...111 or 111...000
    for(int i = 0; i < m-1; i++){
        int l1, r1, l0, r0;
        l1 = pre[i], r1 = suf[i+1];
        l0 = (i+1) - l1;
        r0 = m - (i+1) - r1;
        //000...111
        cost = min(cost, l1+r0);
        //111...000
        cost = min(cost, l0+r1);
    }
    cout<<cost<<'\n';
    return;
}

int main(){
    ios::sync_with_stdio(false), cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}