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
    vector<pair<long long, long long>> money(20);
    for(long long i = 0; i <= 19; i++){
        long long num = ((long long)pow(3, i+1)) + (i * (long long)pow(3, i-1));
        money[i] = {num, (long long)pow(3, i)};
    }
    //money -> {price, watermelons}
    while(t--){
        long long netPrice;
        int n, k, count = 0, ans = INT_MAX;
        int temp;
        cin>>n>>k;
        int i = 0, a = 20;
        while(a >= 0){
            i = a;
            temp = n;
            netPrice = 0;
            count = 0;
            if(money[a].second > n){
                a--;
                continue;
            }
            cout<<i<<endl;
            while(temp > 0 && i >= 0){
                long long watermelons = money[i].second, price = money[i].first;
                long long times = temp / watermelons;
                if(times >= 1){
                    temp -= watermelons*times;
                    netPrice += price*times;
                }
                cout<<netPrice<<" ";
                count += times;
                i--;
            }
            if(count <= k && temp == 0){
                ans = min(ans, (int)netPrice);
            }
            a--;
        }
        cout<<"ans = ";
        if(ans == INT_MAX){
            cout<<-1;
            cout<<endl;
            continue;
        }
        cout<<ans;
        cout<<endl;
    }
    return 0;
}
