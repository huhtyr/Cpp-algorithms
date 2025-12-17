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
    long long t;
    cin>>t;
    vector<pair<long long, long long>> money(20);
    for(long long i = 0; i <= 19; i++){
        long long num = ((long long)pow(3, i+1)) + (i * (long long)pow(3, i-1));
        money[i] = {num, (long long)pow(3, i)};
    }
    reverse(money.begin(), money.end());
    //money -> {price, watermelons}
    while(t--){
        long long n, netPrice = 0;
        cin>>n;//no. of watermelons req
        for(long long i = 0; i < money.size() && n >= 1; i++){
            long long watermelons = money[i].second;
            long long price = money[i].first;
            long long times = n / watermelons;
            if(times >= 1){
                n -= watermelons*times;
                netPrice += price*times;
            }
        }
        cout<<netPrice;
        cout<<endl;
    }
    return 0;
}