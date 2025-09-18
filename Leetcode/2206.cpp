
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int num : nums) {
            map[num]++;
        }

        for(const auto & pair : map){
            if(pair.second % 2 != 0){
                return false;
            }
        }
        return true;
    }
};

