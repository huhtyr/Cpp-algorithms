#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t > 0){
        int n, k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            int temp;
            cin>>temp;
            v[i] = temp;
        }
        int zeros = 0, ans = 0;
        for(int i = 0; i < n; i++){
            if(v[i] == 1)   zeros = 0;
            else    zeros++;
            if(zeros == k){
                ans++;
                i++;
                zeros = 0;
            }
        }
        cout<<ans<<endl;
        t--;
    }
    return 0;

}