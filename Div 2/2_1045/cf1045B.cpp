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
        int i = 0;
        vector<int> nums(n, 0);
        while(n--){
            int a;
            cin>>a;
            nums[i] = a;
            i++;
        }
        
        cout<<endl;
    }
    return 0;
}