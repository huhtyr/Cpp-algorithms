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
    int n, k;
    cin>>n>>k;
    vi a(n);
    for(int i = 0; i < n; i++)  cin>>a[i];
    sort(a.begin(), a.end(), greater<int>());
    int i;
    map<int, int> mpp;
    for(i = 0; i < n; i++){
        if(a[i] >= k/2) mpp[a[i]]++;
        else    break;
    }
    for( ; i < n; i++){
        int m = a[i]*2;
        while(m <= k){
            if(mpp.find(m) == mpp.end()){
                cout<<-1<<'\n';
                return;
            }
            else{
                mpp.erase(m);
                mpp[a[i]]++;
            }
            m += m;
        }
    }
    int sum = 0;
    for(auto&x : mpp)   sum += x.second;
    cout<<sum<<'\n';
    for(auto& x : mpp){
        cout<<x.first<<" ";
    }
    cout<<'\n';
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