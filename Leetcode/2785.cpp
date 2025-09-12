class Solution {
public:
    string sortVowels(string s) {
        vector<char> list;
        string vowels = "aeiouAEIOU";
        for(char c : s){
            if(vowels.find(c) != string::npos){
                list.push_back(c);
            }
            
        }
        sort(list.begin(),list.end());
        int counter = 0;
        for(int i = 0; i< s.size(); i++){
            if(vowels.find(s[i]) != string::npos){
               s[i] = list[counter];
               counter++;
            }
        }
        return s;
    }
};