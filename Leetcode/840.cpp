
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int counter = 0;
        for(int i = 1; i < grid.size() - 1; ++i){        // row 1 … size-2
            for(int j = 1; j < grid[i].size() - 1; ++j){ // col 1 … size-2
                if(grid[i][j] == 5 && checkMagicSquare(grid, i, j)){
                    counter++;
                }
            }
        }
        return counter;
    }
private:
bool checkMagicSquare(vector<vector<int>>& grid, int indexI, int indexJ){
    unordered_set<int> Set;

    for(int i = -1; i <= 1; i++){
        int rowSum = 0;
        int colSum = 0;
        for(int j = -1; j <= 1; j++){

            int valRow = grid[indexI + i][indexJ + j];
            int valCol = grid[indexI + j][indexJ + i];

            if(valRow < 1 || valRow > 9) return false;
            if(Set.find(valRow) != Set.end()) return false;
            Set.insert(valRow);

            rowSum += valRow;
            colSum += valCol;
        }

        if(rowSum != 15 || colSum != 15) return false;
    }

    
    int diag1 = grid[indexI-1][indexJ-1] + grid[indexI][indexJ] + grid[indexI+1][indexJ+1];
    int diag2 = grid[indexI-1][indexJ+1] + grid[indexI][indexJ] + grid[indexI+1][indexJ-1];

    if(diag1 != 15 || diag2 != 15) return false;

    return Set.size() == 9;
}
 
};