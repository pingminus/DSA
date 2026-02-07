class Solution {
public:
    int minimumDeletions(string s) {
        int counterB = 0;
        int Minimum = 0;
        for(char c : s){
            if(c == 'b') {
                counterB++;
            }
            else if (c == 'a' && counterB > 0){
                Minimum = min(Minimum+1,counterB);
            }
        }
        return Minimum;
    }
};