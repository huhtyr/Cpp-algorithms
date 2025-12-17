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
    while(t--){
        vector<int> v(3, 0);
        int n, s, sum = 0;
        cin>>n>>s;
        while(n--){
            int a;
            cin>>a;
            v[a]++;
        }
        sum += v[1] + (2*v[2]);
        if(s < sum || s == sum+1){
            for(int i = 0; i < v[0]; i++)   cout<<0<<" ";
            for(int i = 0; i < v[2]; i++)   cout<<2<<" ";
            for(int i = 0; i < v[1]; i++)   cout<<1<<" ";
        }
        else    cout<<-1;
        cout<<endl;
    }
    return 0;

}