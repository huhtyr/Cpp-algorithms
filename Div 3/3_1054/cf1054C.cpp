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
        int n, k;
        cin>>n>>k;
        vector<int> freq(n+1, 0);
        while(n--){
            int a;
            cin>>a;
            freq[a]++;
        }
        int ans = 0;
        for(int i = 0; i < k; i++){
            if(freq[i] == 0){
                ans++;
                if(freq[k] > 0) freq[k]--;
            }
        }
        ans += freq[k];
        cout<<ans;
        cout<<endl;
    }
    return 0;
}