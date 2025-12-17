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
    vi a(n), b(n);
    for(int i = 0; i < n; i++)  cin>>a[i];
    for(int i = 0; i < n; i++)  cin>>b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<>());
    int cnt = 0, sum = 0;
    for(int i = 0; i < n; i++){
        if(cnt < k){
            sum += max(a[i], b[i]);
            cnt++;
        }
        else    sum += a[i];
    }
    cout<<sum<<'\n';
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