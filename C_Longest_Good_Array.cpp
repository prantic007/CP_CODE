#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;

       int ans = 1;
        int inc = 1;
        
       while(l <= r){

          l += inc;
          inc++;

          if(l <= r)ans++;
       }


       cout<<ans<<endl;


    }
}