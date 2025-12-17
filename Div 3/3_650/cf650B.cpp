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
    int even = 0, odd = 0;
    for(int i = 0; i < n; i++)  cin>>v[i];
    for(int i = 0; i < n; i++){
        if(i%2 != v[i]%2){
            if(i%2 == 0)    even++;
            else    odd++;
        }
    }
    if(odd != even){
        cout<<-1<<'\n';
        return;
    }
    cout<<even<<'\n';
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