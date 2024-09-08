#include<bits/stdc++.h>
using namespace std;

vector<int> nums = {2,0,2,1,1,0};
int main(){
    int r = 0;
        int w = 0;
        int b = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==0) r++;
            if(nums[i]==1) w++;
            if(nums[i]==2) b++;   
        }    
        for(int i = 0; i<nums.size(); i++){
            if(i=0 || i<r){
                nums[i]=0;
            }
            if(i=r || (i<(r+w))){
                nums[i]=1;
            }
            if(i=(r+w) || (i<(r+w+b))){
                nums[i]=1;
            }
        }
        for(auto it: nums){
            cout<<it<<" ";
        }
}
