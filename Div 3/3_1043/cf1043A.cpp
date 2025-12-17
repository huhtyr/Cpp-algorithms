#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <algorithm>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using piii = pair<int, pair<int, int>>;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, len;
        cin>>n;
        string s, a, turn, vlad;
        cin>>s;
        cin>>len;
        cin>>a;
        cin>>turn;
        for(int i = 0; i < len; i++){
            if(turn[i] == 'V'){
                vlad.push_back(a[i]);
            }
            else    s.push_back(a[i]);
        }
        reverse(vlad.begin(), vlad.end());
        vlad += s;
        for(char c : vlad)  cout<<c;
        cout<<endl;
    }
    return 0;
}