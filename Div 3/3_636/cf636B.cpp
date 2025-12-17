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
    if(n%4 != 0){
        cout<<"NO"<<'\n';
        return;
    }
    cout<<"YES"<<'\n';
    vi v(n);
    int s1 = 0;
    for(int i = 0; i < n/2; i++){
        v[i] = i*2 + 2;
        cout<<v[i]<<" ";
        s1 += v[i];
    }
    int s2 = 0;
    for(int i = n/2; i < n-1; i++){
        v[i] = (i-n/2)*2 + 1;
        s2 += v[i];
        cout<<v[i]<<" ";
    }
    v[n-1] = s1-s2;
    cout<<v[n-1]<<'\n';
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