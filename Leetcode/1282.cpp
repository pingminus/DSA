#include <bits/stdc++.h>
using namespace std;

// Group the People given the the group size they belong to 
//Medium

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<int>> Map;
        vector<vector<int>> result;

        for(int i{}; i < groupSizes.size(); ++i){
            Map[groupSizes[i]].push_back(i);
        }
        for(auto& pair : Map){
            vector<int> helper;
            for(int i{}; i < pair.second.size(); ++i){
                if(helper.size() == pair.first){
                    result.push_back(helper);
                    helper.clear();
                }
                helper.push_back(pair.second[i]);
            }
            result.push_back(helper);
        }
        return result;
    }
};