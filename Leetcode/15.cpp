#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //map
        unordered_map<int,vector<int>> Map;

        for(int k{}; k < nums.size(); k++){
            Map[nums.size()].push_back(k);
        }
        
        for(int i{}; i < nums.size(); ++i){
            
            for(int j{}; j < nums.size(); ++j){
                int SearchNum = -nums[i] - nums[j];
                if(Map.find(SearchNum) != Map.end() ){
                    int index = Map[SearchNum].pop_back();
                    if(index != )
                }

            }
        }
    }
};