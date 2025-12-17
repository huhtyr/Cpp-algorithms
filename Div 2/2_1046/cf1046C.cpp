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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int, int> mpp;
        while(n--){
            int a;
            cin>>a;
            mpp[a]++;
        }
        int ans = 0;
        for(auto it : mpp){
            if(it.second >= it.first){
                int noOfBlocks = it.second / it.first;
                ans += (noOfBlocks);
            }
        }
        cout<<ans;
        cout<<endl;
    }
    return 0;

}