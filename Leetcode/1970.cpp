#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        vector<vector<int>> matrix(row, vector<int>(col, 0));
        int i = 0;
        for(int day{}; day < cells.size(); day++){
            if(!ThereIsAWay(matrix)){
                return day;
            }

             matrix[cells[i][0]-1][cells[i][1]-1] = 1;
        }

    }
private:
    bool ThereIsAWay(vector<vector<int>>& matrix){
        std::queue<std::pair<int, int>> q;
        
        
        for(int i = 0; i < matrix[0].size(); i++){
            if(matrix[0][i] == 0){
                pair<int, int> Pair(0,i);
                q.push(Pair);
            }
        }
        return BFS(matrix, q);

    }
    bool BFS(vector<vector<int>>& matrix, queue<pair<int,int>> q){
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<bool>> visited(row, vector<bool>(col, false));
        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};

        while(!q.empty()){
            pair<int,int> p = q.front();
            int r = p.first;
            int c = p.second;
            if(r == row - 1) return true;
            for(int i = 0; i < 4; i++){
                int nr = r + dr[i];
                int nc = c + dc[i];
                if(nr < 0 || nr >= row || nc < 0 || nc >= col) continue;
                if(matrix[nr][nc] == 0 && !visited[nr][nc]){
                    visited[nr][nc] = true;
                    q.push({nr, nc});
                }

            }
        }
        return false;
    }
};