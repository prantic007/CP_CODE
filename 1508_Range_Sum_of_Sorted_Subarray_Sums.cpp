#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;

class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
       
        vector<int>v;
        
        for(int i = 0 ; i < n ; i++){
            int sum = 0;
            for(int j = i ; j < n ; j++){
                
                sum = sum + (nums[j]);
                sum = sum % mod;
                v.push_back(sum);
                
            }
        }
        
        sort(v.begin(),v.end());
        int ans = 0;
        for(int i = left-1 ; i <= right-1 ; i++){
            ans += v[i];
            ans = ans % mod;
        }
        
        return ans;
        
    }
};