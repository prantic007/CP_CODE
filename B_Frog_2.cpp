#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);

    for(int i = 0 ; i < n ; i++){
        cin>>v[i];
    }

    vector<int>dp(n + 1, -1 );

    
    
    for(int i = 0 ; i < n ; i++){
        if(i <= k ){
            dp[i] = abs(v[i] - v[0]);
        }
        else{
            int mn = INT_MAX;
            for( int j = i - 1 ; j >= i - k ; j--){
                  int x = dp[j] + abs(v[i] - v[j]);
                  mn = min(mn,x);
            }
            dp[i] = mn;
        }
    }

   
    cout<<dp[n - 1]<<endl;    

}