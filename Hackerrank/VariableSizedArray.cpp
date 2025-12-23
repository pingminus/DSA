#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<vector<int>> arrays;

    int n,q;
    cin >> n >> q;
    
    for(auto i{0};i < n; i++){
        int size;
        cin >> size;
        vector<int> array;
        for(auto j{0}; j< size; j++){
            int num;
            cin >> num;
            array.push_back(num);
        }
        arrays.push_back(array);
        
    }
    for(auto i{0}; i < q; i++){
        int num1,num2;
        cin >> num1 >> num2;
        cout << arrays[num1][num2] << std::endl;
    }
    int num;
    cin >> num;
    return 0;
}