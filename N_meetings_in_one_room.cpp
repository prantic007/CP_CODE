#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int n, int start[], int end[]) {
        // Your code here
        vector<pair<int,int>>vp;
        for(int i = 0 ; i < n ; i ++){
            vp.push_back({start[i],end[i]});
        }
        
        sort(vp.begin(),vp.end());
        
        int mx = 0;
        int ans = 0;
        
        for(int i = 0 ; i < n ; i++){
            if(vp[i].first > mx){
                ans++;
                mx = vp[i].second;
            }
            else{
                if(vp[i].second < mx){
                    mx = vp[i].second;
                }
            }
        }
       return ans; 
    }
};

int main(){
    
}