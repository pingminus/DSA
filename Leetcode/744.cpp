#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        vector<char> chars; 

        for(char l : letters){
            if( l  > target)
            {
                chars.push_back(l);
            }
        }
        if(chars.size() == 0) return letters[0];
        char Min = chars[0];
        for(char c : chars){
            if(c < Min){
                Min = c;
            }
        }
        return Min;
    }
};