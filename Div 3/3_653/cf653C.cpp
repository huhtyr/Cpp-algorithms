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
    string s;
    cin>>s;
    int cnt = 0, cnt2 = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(') cnt++;
        else{
            if(cnt > 0) cnt--;
            else    cnt2++;
        }
    }
    cout<<cnt2<<'\n';
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