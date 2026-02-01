#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        
        for(size_t i = nums.size() - 1; i > 0; i--){
            if(nums[i-1] >= nums[i]){
                return nums.size()-i-1;
            }


        } 
    }
};

