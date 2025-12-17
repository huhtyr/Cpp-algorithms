#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <unordered_map>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using piii = pair<int, pair<int, int>>;
int main(){
    int t;
    cin>>t;
    while(t--){
        unordered_map<int, int> umpp;
        int n;
        bool a = false;
        cin>>n;
        while(n--){
            int a;
            cin>>a;
            umpp[a]++;
        }
        for(auto it : umpp){
            if(it.second >= 2){
                a = true;
                cout<<"YES";
                break;
            }
        }
        if(!a)  cout<<"NO";
        cout<<endl;
    }
    return 0;
}