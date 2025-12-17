#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool comparator(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b){
    return a.first.first < b.first.first;
}
int main(){
    int t;
    cin>>t;
    while(t > 0){
        int n, k;
        cin>>n>>k;
        vector<pair<pair<int, int>, int>> v(n);
        for(int i = 0; i < n; i++){
            int left, real, right;
            cin>>left>>real>>right;
            v[i] = {{left, right}, real};
        }
        sort(v.begin(), v.end(), comparator);
        int ans = k;
        for(auto x : v){
            if(x.first.first <= ans && x.first.second >= ans){
                ans = max(k, x.second);
            }
        }
        cout<<"ans = "<<ans<<endl;
        t--;
    }
    return 0;

}