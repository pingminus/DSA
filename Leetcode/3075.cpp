#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long sum = 0;
        int decrementor = 0;
        sort(happiness.begin(), happiness.end(), greater<int>());
        for(int hap : happiness){
            cout << hap << endl; 
        }
        for(int i{}; i < k; i++){
            sum += happiness[i] - i;
        }
        return sum;
    }
};