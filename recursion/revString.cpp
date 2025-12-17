#include <iostream>
#include <string>
#include <vector>
using namespace std;
void revString(string& s, int left, int right){
    if(left >= right)   return;
    swap(s[left], s[right]);
    revString(s, left+1, right-1);
}
int main(){
    string s = "Hannah";
    int left = 0, right = s.size()-1;
    revString(s, left, right);
    for(int i = 0; i < s.size(); i++)   cout<<s[i]<<" ";
    return 0;
}
