#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,vector<int>> modMap;

        for(int n : nums){
            modMap[n%3].push_back(n);
        }
        sort(modMap[0].begin(),modMap[0].end(), greater<int>());
        sort(modMap[1].begin(),modMap[1].end(),greater<int>());
        sort(modMap[2].begin(),modMap[2].end(),greater<int>());
        int maxSum{};
        
        for(int i{}; i < 3; i++){
            if(modMap[i].size() >= 3){
                maxSum = max(modMap[i][0] + modMap[i][1] + modMap[i][2],maxSum);  
            }
        }
        if (!modMap[0].empty() && !modMap[1].empty() && !modMap[2].empty())
        maxSum = max(maxSum, modMap[0][0] + modMap[1][0] + modMap[2][0]);        

        return maxSum; 
}
};