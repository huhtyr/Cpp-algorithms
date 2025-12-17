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
    vi odd, even;
    for(int i = 0; i < n; i++){
        int a;
        cin>>a;
        if(a%2 == 0)    even.push_back(a);
        else    odd.push_back(a);
    }
    if(even.size() == 0){
        for(int j = 0; j < n; j++){
            if(j%2 == 0)    cout<<odd[0]<<" ";
            else    cout<<0<<" ";
        }
        cout<<'\n';
        return;
    }
    if(odd.size() == 0){
        for(int j = 0; j < n; j++)  cout<<0<<" ";
        cout<<'\n';
        return;
    }
    sort(even.begin(), even.end(), greater<int>());
    sort(odd.begin(), odd.end(), greater<int>());
    vi ans(n+1, 0);
    ans[1] = odd[0];
    int i = 1, j = 1, cnt = odd[0];
    for(i = 2; i < n; i++){
        if(i%2 == 0)    ans[i] = odd[0]+even[0];
        else{
            cnt += even[j];
            ans[i] = odd[0] + cnt;
            j++;
            if(j >= even.size())    break;
        }
    }
    i++;
    if(n >= 3){
        while(i < n){
            ans[i] = ans[i-2];
            i++;
        }
    }
    int a = accumulate(odd.begin(), odd.end(), 0);
    if((cnt+a)%2 != 0)  ans[n] = (cnt+a);
    for(int i = 1; i <= n; i++) cout<<ans[i]<<" ";
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