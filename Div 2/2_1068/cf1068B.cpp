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
    int n;
    cin>>n;
    vi aa(n), bb(n);
    for(int i = 0; i < n; i++){
        cin>>aa[i];
    }
    for(int i = 0; i < n; i++){
        cin>>bb[i];
    }
    long long k1 = 0, k2 = 0;
    for(int i = 0; i < n; i++){
        long long a = k1-aa[i];
        long long b = bb[i]-k1;
        long long c = k2-aa[i];
        long long d = bb[i]-k2;
        k1 = max(a, max(b, max(c, d)));
        k2 = min(a, min(b, min(c, d)));
    }
    cout<<k1<<'\n';
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