class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> vec;
        for(int i = 0; i<n; i++){
            int b = n-i;
            if(!zeroInt(i) && !zeroInt(b)){
                vec.push_back(i); 
                vec.push_back(b);
                return vec; 
            }
        }
        return vec;
    }
    bool zeroInt(int number) {
    if (number == 0) return true;
    
    number = std::abs(number);
    
    while (number > 0) {
        if (number % 10 == 0) {
            return true;
        }
        number /= 10;
    }
    return false;
}
};