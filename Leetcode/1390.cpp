#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int totalsum = 0;

        for(int& num : nums){

            int counter = 0;
            int subsum = 0;

            for(int i = 1; i <= num; i++){
                if(num % i == 0) {
                   
                   subsum += i;
                   counter++;
                    if(counter > 4){
                        break;
                    }


                }
            }
            if(counter == 4){
                totalsum += subsum;
            }

        }
        return totalsum;
    }
};