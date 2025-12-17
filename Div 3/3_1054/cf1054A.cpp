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
        int cnt0 = 0, cntNeg = 0;
        while(n--){
            int a;
            cin>>a;
            if(a == 0)  cnt0++;
            else if(a == -1)    cntNeg++;
        }
        int ans = (cntNeg%2==0) ? cnt0 : cnt0+2;
        cout<<ans;
        cout<<endl;
    }
    return 0;
}