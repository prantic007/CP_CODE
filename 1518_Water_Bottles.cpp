#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        int ans = 0;
        int rem = 0;
        int n = numBottles;
        while(numBottles != 0){
            ans += numBottles;
            numBottles = (numBottles + rem)/numExchange;
            rem = n % numExchange;
            n = numBottles + rem;
            
        }
        
        
        return ans;
        
    }
};