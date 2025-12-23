#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int sizeStrings = strs[0].size();
        int i = 0;
        int counter = 0;
        while(i < sizeStrings){
            char before;
            for(auto j{0}; j < strs.size(); j++){
                if(j == 0){
                    before = strs[j][i];
                    continue;
                }
                if(before > strs[j][i]){
                    counter++;
                    break;
                }
                before = strs[j][i];
            }

            i++;
        }
        return counter;

    }
};