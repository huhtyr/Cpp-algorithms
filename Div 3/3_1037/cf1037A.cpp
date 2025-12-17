#include <iostream>
using namespace std;
int main(){
    int x, t;
    cin>>t;
    while(t > 0){
        cin>>x;
        int mini = 9;
        while(x > 0){
            mini = min(mini, x%10);
            x /= 10;
        }
        cout<<mini<<endl;
        t--;
    }
    return 0;

}