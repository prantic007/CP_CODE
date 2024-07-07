#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
             int n = arr.size();
             if(n == 1)return -1;
        
        // Code Here
        int largest = arr[0];
        int secondl = arr[1];
        
   
        
        for(int i = 1 ; i < n ; i++ ){
            if(arr[i] > largest){
                secondl = largest;
                largest = arr[i];
            }
            else if(arr[i] == largest)continue;
            else{
               // cout<<i<<" ";
                secondl = max(secondl,arr[i]);
            }
        }
        //cout<<largest<<endl;
    if(largest == secondl)return -1;
    else return secondl;
    }
};