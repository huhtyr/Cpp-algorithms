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
    string s;
    cin>>s;
    int cnt = 0, t = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            t = k;
        }
        else{
            if(t > 0){
                t--;
                continue;
            }
            cnt++;
        }
    }
    cout<<cnt<<'\n';
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