
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int counter = 0;
        for(int i{}; i < grid.size(); ++i){

            for(int j{}; j < grid[i].size(); ++j){
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

        for(int i = indexI-1; i < 3; i++){
            int sum = 0;
            for(int j = indexJ - 1; j < 3; j++){
                if(Set.find(grid[i][j]) != Set.end()) return false;
                else Set.insert(grid[i][j]);
                
                if(sum != 15) return false;
                sum += grid[i][j];
            }
            if(sum != 15) return false;

            sum = 0;
            for(int j = indexJ - 1; j < 3; j++){
                if(sum > 15) return false;
                sum += grid[j][i];
            }
            if(sum != 15) return false;

            sum = 5;
            sum += grid[indexI-1][indexJ-1];
            sum += grid[indexI+1][indexJ+1];
            if(sum != 15) return false;
            sum = 5;
            sum += grid[indexI-1][indexJ+1];
            sum += grid[indexI+1][indexJ-1];
            if(sum != 15) return false;


            return Set.size() == 9;




            


        }
    }
};