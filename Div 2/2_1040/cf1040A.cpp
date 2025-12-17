#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using piii = pair<int, pair<int, int>>;
int main(){
    int t;
    cin>>t;
    while(t > 0){
        map<int, int> mpp;
        int n, score = 0;
        cin>>n;
        while(n--){
            int a;
            cin>>a;
            mpp[a]++;
        }
        for(auto it : mpp){
            if(it.first == 0)   score += it.second;
            score += it.first*it.second;
        }
        cout<<score<<endl;
        t--;
    }
    return 0;

}