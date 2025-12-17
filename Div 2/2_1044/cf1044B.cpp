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
        int n;
        cin>>n;
        vector<int> nums(n);
        int i = 0;
        while(n--){
            int a;
            cin>>a;
            nums[i] = a;
            i++;
        }
        sort(nums.begin(), nums.end(), greater<int>());
        long long maxEmerald = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i % 2 == 0)  maxEmerald += nums[i];
        }
        cout<<maxEmerald;
        cout<<endl;
    }
    return 0;
}