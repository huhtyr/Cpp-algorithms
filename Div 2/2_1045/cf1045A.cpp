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
        int n, a, b;
        cin>>n>>a>>b;
        int modN = n%2;
        int modA = a%2;
        int modB = b%2;
        if(modN == 0){
            if(modA == 1 && modB == 1)  cout<<"NO";
            else if(modA == 1 && modB == 0){
                if(b > a)   cout<<"YES";
                else    cout<<"NO";
            }
            else if(modA == 0 && modB == 1) cout<<"NO";
            else    cout<<"YES";
        }
        else{
            if(modA == 0 && modB == 0)  cout<<"NO";
            else if(modA == 1 && modB == 1) cout<<"YES";
            else if(modA == 1 && modB == 0) cout<<"NO";
            else{
                if(b > a)   cout<<"YES";
                else    cout<<"NO";
            }
        }
        cout<<endl;
    }
    return 0;
}