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
    vi v(n);
    for(int i = 0; i < n; i++)  cin>>v[i];
    int ans = 0;
    for(int i = n-1; i >= 0; i--){
        bool a = false;
        for(int j = i-1; j >= 0; j--){
            if(v[j] > v[i]){
                ans++;
                a = true;
                break;
            }
        }
        if(a)   continue;
    }
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