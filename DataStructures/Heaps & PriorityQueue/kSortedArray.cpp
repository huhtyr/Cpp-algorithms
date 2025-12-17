#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
    int k = 3;
    vector<int> v = {6,5,3,2,8,10,9};//here, k = 3
    vector<int> ans;
    priority_queue<int, vector<int>, greater<int>> pq;//minHeap
    for(int i = 0; i < v.size(); i++){
        pq.push(v[i]);
        if(pq.size() > k){
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
    for(int i : ans)    cout<<i<<" ";
    return 0;
}

/*
1 2 3
2 3 5
4 6 7
k = 2
sort: 1 2 2 3 3 4 5 6 7
*/