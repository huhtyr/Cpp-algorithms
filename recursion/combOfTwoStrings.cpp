#include <iostream>
#include <vector>
#include <string>
using namespace std;
void helper(string a, string b, string& temp, int idx, vector<string>& ans){
    if(idx == 2){
        ans.push_back(temp);
        return;
    }
    if(idx > 2) return;
    temp.push_back(a[idx]);
    for(int i = idx; i < 2; i++){
        temp.push_back(b[idx]);
        helper(a, b, temp, idx+1, ans);
        temp.pop_back();
        helper(a, b, temp, idx+1, ans);
    }
    temp.pop_back();
}
int main(){
    string a = "ab", b = "cd", temp;
    vector<string> ans;
    helper(a, b, temp, 0, ans);
    for(auto it : ans)  cout<<it<<" ";
    //required : [ac, ad, bc, bd]
}