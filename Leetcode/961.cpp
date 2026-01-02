#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int> Set;
        for(int num : nums){
            if(Set.find(num) != Set.end()){
                return num;
            }
            Set.insert(num);
        }
        return -1;
    }
};