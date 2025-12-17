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
        vector<int> v;
        while(n--){
            int a;
            cin>>a;
            v.push_back(a);
        }
        vector<int> ans;
        for(int i = 0; i < v.size(); i++){
            ans.push_back(v.size()+1-v[i]);
        }
        for(int i : ans)    cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}