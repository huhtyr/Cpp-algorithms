#include <iostream>
using namespace std;
class DisjointSetUnion{
    vector<int> rank, parent, size;
public:
    DisjointSetUnion(int n){//constructor
        rank.resize(n+1, 0);//for 1-based indexing
        parent.resize(n+1);
        size.resize(n+1, 1);
        for(int i = 0; i <= n; i++){
            parent[i] = i;
        }
    }
    int findUlParent(int n){
        if(parent[n] == n)  return n;
        return parent[n] = findUlParent(parent[n]);
    }
    void unionByRank(int u, int v){
        int ulpU = findUlParent(u);
        int ulpV = findUlParent(v);
        if(ulpU == ulpV)    return;
        if(rank[ulpU] < rank[ulpV]){
            parent[ulpU] = ulpV;
        }
        else if(rank[ulpU] > rank[ulpV]){
            parent[ulpV] = ulpU;
        }
        else{
            parent[ulpV] = ulpU;
            rank[ulpU]++;
        }
    }
    void unionBySize(int u, int v){
        int ulpU = findUlParent(u);
        int ulpV = findUlParent(v);
        if(size[ulpU] < size[ulpV]){
            parent[ulpU] = ulpV;
            size[ulpV] += size[ulpU];
        }
        else{
            parent[ulpV] = ulpU;
            size[ulpU] += size[ulpV];
        }
    }
};

int main(){
    DisjointSetUnion ds(7);
    ds.unionBySize(1,2);
    ds.unionBySize(2,3);
    ds.unionBySize(4,5);
    ds.unionBySize(6,7);
    ds.unionBySize(5,6);
    if(ds.findUlParent(3) == ds.findUlParent(7))    cout<<"same"<<endl;
    else    cout<<"not same"<<endl;
    ds.unionBySize(3,7);
    if(ds.findUlParent(3) == ds.findUlParent(7))    cout<<"same"<<endl;
    else    cout<<"not same"<<endl;
}