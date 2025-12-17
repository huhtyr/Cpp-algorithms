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
    vi v(n);
    for(int i = 0; i < n; i++)  cin>>v[i];
    if(n == 1){
        cout<<0<<'\n';
        return;
    }
    map<int, int> mpp;
    int maxi = 0;
    for(int i = 0; i < n; i++){
        mpp[v[i]]++;
        maxi = max(maxi, mpp[v[i]]);
    }
    //unique elements = mpp.size()
    int uni = mpp.size();
    if(uni == maxi){
        cout<<uni-1<<'\n';
        return;
    }
    cout<<min(uni, maxi)<<'\n';
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