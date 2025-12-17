#include <iostream>
#include <vector>
#include <queue>
using namespace std;
/*
    1 2 3
    4 5 6
    7 8 9
*/
int main(){
    vector<vector<int>> grid = {{1,2,3},{4,5,6},{7,8,9}};
    int m = grid.size(), n = grid[0].size();
    vector<vector<int>> visited = {{0,0,0},{0,0,0},{0,0,0}};
    //BFS Traversal
    pair<int, int> index = {1,1};
    visited[1][1] = 1;
    queue<pair<int, int>> q;
    vector<vector<int>> directions = {{-1,0}, {1,0}, {0,-1}, {0,1}};
    q.push({index.first, index.second});
    while(!q.empty()){
        int noOfElems = q.size();
            while(noOfElems--){
            pair<int, int> temp = q.front();
            q.pop();
            cout<<grid[temp.first][temp.second]<<" ";
            for(auto it : directions){
                int newRow = temp.first + it[0];
                int newCol = temp.second + it[1];
                if(newRow < m && newRow >= 0 && newCol < n && newCol >= 0 && visited[newRow][newCol] == 0){
                    q.push({newRow, newCol});
                    visited[newRow][newCol] = 1;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}