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
// #define int long long
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using piii = pair<int, pair<int, int>>;

void solve(){
    string s, t;
    cin>>s>>t;
    map<char, int> mpps;
    map<char, int> mppt;
    map<char, int> mpp;
    for(int i = 0; i < s.size(); i++)   mpps[s[i]]++;
    for(int i = 0; i < t.size(); i++)   mppt[t[i]]++;
    for(auto& x : mpps){
        char c = x.first;
        int a = mpps[c], b = mppt[c];
        if(a > b){
            cout<<"Impossible"<<'\n';
            return;
        }
    }
    for(auto& x : mppt){
        char c = x.first;
        if(mpps.find(c) != mpps.end()){
            mpp[c] = mppt[c]-mpps[c];
        }
        else    mpp[c] = mppt[c];
    }
    string a;
    for(auto& x : mpp){
        while(x.second > 0){
            a += x.first;
            x.second--;
        }
    }
    int i = 0, j = 0;
    string d;
    while(i < s.size() || j < a.size()){
        if (i >= s.size()){
            d += a[j];
            j++;
        }
        else if (j >= a.size()){
            d += s[i];
            i++;
        }
        else {
            if(a[j] < s[i]){ 
                d += a[j];
                j++;
            } 
            else{
                d += s[i];
                i++;
            }
        }
    }
    while(i < s.size()){
        d += s[i];
        i++;
    }
    cout<<d<<'\n';
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