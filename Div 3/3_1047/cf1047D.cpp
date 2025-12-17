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
        vector<int> v;
        unordered_map<int, int> umpp;
        unordered_map<int, vector<pair<int, int>>> umpp2;
        while(n--){
            int a;
            cin>>a;
            v.push_back(a);
            umpp[a]++;
        }
        int counter = 1;
        bool flag = false;
        for(auto it : umpp){
            if(it.second % it.first != 0){
                cout<<-1<<endl;
                flag = true;
                break;
            }
            int freq = it.second/it.first;
            while(freq >= 1){
                umpp2[it.first].push_back({counter, it.first});
                counter++;
                freq--;
            }
        }
        if(flag)    continue;
        vector<int> ans;
        for(int i = 0; i < v.size(); i++){
            auto& a = umpp2[v[i]];
            ans.push_back(a[a.size()-1].first);
            a[a.size()-1].second--;
            if(a[a.size()-1].second == 0)   a.pop_back();
        }
        for(auto i : ans)   cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}