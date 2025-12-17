#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <algorithm>
#include <climits>
#include <unordered_map>
#include <cmath>
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
        vector<int> v;
        while(n--){
            int a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        int ans = INT_MIN;
        for(int i = 0; i < v.size()-1; i += 2){
            ans = max(ans, abs(v[i]-v[i+1]));
        }
        cout<<ans;
        cout<<endl;
    }
    return 0;
}