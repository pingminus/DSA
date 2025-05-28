#include <iostream>
#include <vector>
using namespace std;


int main(){
    int t;
    cin >> t;
    vector<int> nums;
    while(t--){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    int counter = 0;
    for(int i = 0; i<nums.size(); ++i){
        for(int j = i +1; j<nums.size(); ++j){

            if(i < j  && nums[i] == nums[j]) counter++;
        }
    }
    cout << counter << "\n";





    return 0;



}