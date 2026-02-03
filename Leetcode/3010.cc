#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int sum = 0;
        sort(nums.begin()+1, nums.end());
        for(size_t i{}; i < 3; ++i){
            sum += nums[i];

        }


        return sum;
    }
};