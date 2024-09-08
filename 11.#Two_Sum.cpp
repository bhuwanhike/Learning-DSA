#include<bits/stdc++.h>
using namespace std;
// Brute force

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> p;
        for(int i = 0; i<nums.size(); i++){
            for(int k = i+1; k<nums.size(); k++){
                if((nums[k]+nums[i])== target){
                    p.push_back(k);
                    p.push_back(i);
                }
            }
        }   
        
        return p;
    }
};


// Optimal approach

