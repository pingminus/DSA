#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char Min = 'a';
        int i;
        for(char l : letters){
            if(l > target and Min > l){
                Min = l;
            }                        
            i++;
        }
    }
};