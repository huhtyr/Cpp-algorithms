#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using piii = pair<int, pair<int, int>>;
int main(){
    int t;
    cin>>t;
    while(t--){
        int count = 0;
        long long num, n;
        cin>>n;
        vector<long long> ans;
        for(int i = 1; i <= 18; i++){
            long long power = (long long)pow(10, i);
            num = power + 1;
            if(n % num == 0){
                ans.push_back(n/num);
                count++;
            }
        }
        cout<<count;
        if(count > 0){
            cout<<endl;
            sort(ans.begin(), ans.end());
            for(long long x : ans)    cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}