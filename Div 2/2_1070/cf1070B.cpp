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
#define int long long
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using piii = pair<int, pair<int, int>>;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    ll ans = 0;
    int i = 0, j = 0;
    while(i < n && j < n){
        if(s[i] == '0'){
            j = i+1;
            while(j < n && s[j] == '0') j++;
            ans = max(ans, j-i);
            i = j;
            continue;
        }
        i++;
    }
    int l = 0, r = n-1;
    while(l < n && s[l] == '0') l++;
    while(r >= 0 && s[r] == '0')    r--;
    if(l == r)  ans = n-1;
    ans = max(ans, l+(n-1)-r);
    cout<<ans<<'\n';
    return;
}

signed main(){
    ios::sync_with_stdio(false), cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}