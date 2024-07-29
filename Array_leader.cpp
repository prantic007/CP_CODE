#include<bits/stdc++.h>
using namespace std;


class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
        // Code here
        int mx = 0;
        vector<int>v;
        for(int i = n - 1 ; i >= 0 ; i--){
            if(arr[i] >= mx){
                v.push_back(arr[i]);
                mx = arr[i];
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};

int main(){
    
}