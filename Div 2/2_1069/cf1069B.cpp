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
    int n, l, r;
    cin>>n>>l>>r;
    vi v(n, 0);
    v[0] = 1, v[1] = 2;
    int t = 5, a = v[0] ^ v[1];
    for(int i = 2; i < l-1; i++){
        if(t == a)  t++;
        v[i] = t;
        a ^= t;
    }
    int len = r-l+1;
    if((len > 0) && (len % 2 == 0)){
        int cnt = 1, m = 102^203, w = 406;
        for(int i = l-1; cnt <= len/2; i++){
            if(i == l-1){
                v[i] = 102;
                v[i + (len/2)] = 102;
                cnt++;
                continue;
            }
            if((i == l)){
                v[i] = 203;
                v[i + (len/2)] = 203;
                cnt++;
                continue;
            }
            if(w == m)  w++;
            v[i] = w;
            v[i + (len/2)] = w;
            w ^= v[i];
            cnt++;
        }
    }
    else{
        int m = 0, w = 406;
        for(int i = l-1; i < r; i++){
            if(i == l-1){
                v[i] = 102;
                m ^= v[i];
                continue;
            }
            if(i == l){
                v[i] = 203;
                m ^= v[i];
                continue;
            }
            m ^= v[i];
            if(w == m)  w++;
            v[i] = w;
        }
        v[r-1] = m;
    }
    int d = 0, w = 5583;
    for(int i = r; i < n; i++){
        if(i == r){
            v[i] = 1021;
            d ^= v[i];
            continue;
        }
        if(i == r+1){
            v[i] = 4032;
            d ^= v[i];
            continue;
        }
        if(w == d)  w++;
        v[i] = w;
        d ^= v[i];
    }
    for(int& c : v) cout<<c<<" ";
    cout<<'\n';
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