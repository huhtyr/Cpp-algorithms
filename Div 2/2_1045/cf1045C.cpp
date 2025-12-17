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
using pii = pair<long long, long long>;
using piii = pair<long long, pair<long long, long long>>;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, s;
        cin>>n;
        s = n;
        vector<long long> nums;
        while(s--){
            long long a;
            cin>>a;
            nums.push_back(a);
        }
        long long count = 0;
        int i = 0;
        if(n == 2){
            if(nums[1] < nums[0]){
                cout<<nums[0]-nums[1];
            }
            else    cout<<0;
            cout<<endl;
            continue;
        }
        for(i = 0; i+2 < n; i += 2){
            long long left = nums[i];
            long long mid = nums[i+1];
            long long right = nums[i+2];
            long long evenSum = left+right, oddSum = mid;
            if(evenSum > oddSum){
                if(evenSum-oddSum <= right){
                    count += evenSum-oddSum;
                    nums[i+2] -= evenSum-oddSum;
                }
                else{
                    count += evenSum-oddSum;
                    nums[i+2] = 0;
                    nums[i] = evenSum-oddSum-right;
                }
            }
        }
        if(n%2 == 0){
            if(nums[n-1] < nums[n-2]){
                long long diff = nums[n-2]-nums[n-1];
                count += diff;
            }
        }
        cout<<count;
        cout<<endl;
    }
    return 0;
}
