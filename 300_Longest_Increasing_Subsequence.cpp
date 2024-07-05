#include<bits?stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        vector<int>res;
        int n = nums.size();
        
        res.push_back(nums[0]);
        for(int i = 1 ; i < n ; i++){
            
            if(nums[i] > res[res.size() - 1])res.push_back(nums[i]);
            else{
                
                int low = 0;
                int high = res.size() - 1;
                int ans = -1;
                
                while(low <= high){
                    int mid = low + (high - low)/2;
                    
                    if(res[mid] >= nums[i]){
                        ans = mid;
                        high = mid - 1;
                    }
                    else low = mid + 1;  
                }
                
                res[ans] = nums[i];
                
            }
            
        }
        
        return res.size();
        
    }
};