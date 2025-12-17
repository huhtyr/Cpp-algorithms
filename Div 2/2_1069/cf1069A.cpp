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
    vi a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    set<int> s(a.begin(), a.end());
    int d = s.size();
    int mini = INT_MAX;
    for(int i = 0; i < n; i++){
        if(a[i] >= d){
            mini = min(mini, a[i]);
        }
    }
    cout<<mini<<'\n';
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