#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
    vector<vector<int>> matrix = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    vector<vector<int>> visited = {{0,0,0,0}, {0,0,0,0}, {0,0,0,0}, {0,0,0,0}};
    int m = matrix.size(), n = matrix[0].size();
    /*
        1  2  3  4
        5  6  7  8
        9  10 11 12
        13 14 15 16
    */
    pair<int, int> start = {1,2};//starting number = 7
    queue<pair<int, int>> q;
    vector<vector<int>> directions = {{-1,0}, {1,0}, {0,-1}, {0,1}};
    q.push({start.first, start.second});
    visited[start.first][start.second] = 1;
    while(!q.empty()){
        int noOfElems = q.size();
        while(noOfElems--){
            pair<int, int> temp = q.front();
            q.pop();
            cout<<matrix[temp.first][temp.second]<<" ";
            for(vector<int> it : directions){
                int newRow = temp.first + it[0];
                int newCol = temp.second + it[1];
                if(newRow < m && newRow >= 0 && newCol < n && newCol >= 0 && !visited[newRow][newCol]){
                    q.push({newRow, newCol});
                    visited[newRow][newCol] = 1;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}