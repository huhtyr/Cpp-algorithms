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
        int n, k;
        cin>>n>>k;
        int a = n;
        string s;
        cin>>s;
        int cnt = 1;
        int subSize = 0;
        vector<int> ans(n);
        bool b = false;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                subSize++;
                ans[i] = cnt;
                cnt++;
                if(subSize >= k || k == 1){
                    b = true;
                }
            }
            else    subSize = 0;
            if(b)   break;
        }
        if(b){
            cout<<"NO"<<endl;
            continue;
        }
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0'){
                ans[i] = cnt;
                cnt++;
            }
        }
        cout<<"YES"<<endl;
        for(int i : ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;

}