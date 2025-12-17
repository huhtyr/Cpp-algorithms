#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <algorithm>
#include <climits>
#include <unordered_map>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using piii = pair<int, pair<int, int>>;
int main(){
    ios::sync_with_stdio(false),cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string v = s;
        sort(v.begin(), v.end());
        int x = 0;
        if(s == v){
            cout<<0<<endl;
            continue;
        }
        for(int i = 0; i < n; i++){
            if(v[i] != s[i])  x++;
        }
        cout<<x/2;
        cout<<endl;
    }
    return 0;
}