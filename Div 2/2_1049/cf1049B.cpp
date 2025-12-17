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
        bool a = false;
        for(long long i = 1; i < 1e9; i++){
            long long temp = n*pow(10, floor(log10(i)) + 1) + i;
            if(temp%(n+i) == 0){
                cout<<i<<endl;
                a = true;
                break;
            }
        }
        if(a)   continue;
        cout<<endl;
    }
    return 0;
}