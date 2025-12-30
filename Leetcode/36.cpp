#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; ++i){
            unordered_set<char> rowSet;
            unordered_set<char> colSet;
            for(int j = 0; j < 9; ++j){
                char r = board[i][j];
                if(r != '.') {
                    if(rowSet.find(r) != rowSet.end())
                        return false;
                    rowSet.insert(r);
                }

                // Column check
                char c = board[j][i];
                if(c != '.') {
                    if(colSet.find(c) != colSet.end())
                        return false;
                    colSet.insert(c);
                }
            }
        }

        for(int boxRow = 0; boxRow < 9; boxRow += 3){
            for(int boxCol = 0; boxCol < 9; boxCol += 3){
                unordered_set<char> boxSet;
                for(int i = 0; i < 3; ++i){
                    for(int j = 0; j < 3; ++j){
                        char val = board[boxRow + i][boxCol + j];
                        if(val != '.') {
                            if(boxSet.find(val) != boxSet.end())
                                return false;
                            boxSet.insert(val);
                        }
                    }
                }
            }
        }

        return true;
    }
};