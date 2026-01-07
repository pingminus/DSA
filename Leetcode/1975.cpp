class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> Map;
        for(int n : arr){
        Map[n]++;
        
        }
        for(auto& pair : Map){
                if(pair.first == pair.second){
                        return pair.first;
                }
        }
        return -1;
        
    }
};
