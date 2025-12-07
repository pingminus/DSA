#include <algorithm>
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;


class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int Max = -1;

        for(int i = 0; i < nums.size()/2; i++){
            Max = max(nums[i]+nums[nums.size()-1-i], Max);
        }
        return Max;


    }
};
