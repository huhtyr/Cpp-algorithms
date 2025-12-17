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
    int n, t;
    cin>>n>>t;
    string s;
    cin>>s;
    int cnt = 0;
    while(cnt < t){
        vi temp;
        for(int i = 0; i < s.size()-1; i++){
            if((s[i] == 'B') && (s[i+1] == 'G')){
                temp.push_back(i);
            }
        }
        for(int& i : temp){
            s[i] = 'G';
            s[i+1] = 'B';
        }
        cnt++;
    }
    for(char& a : s)    cout<<a;
    cout<<'\n';
    return;
}

int main(){
    ios::sync_with_stdio(false), cin.tie(0);
    solve();
    return 0;
}