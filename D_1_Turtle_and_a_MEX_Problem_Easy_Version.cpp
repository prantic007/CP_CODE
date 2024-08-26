#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;


       int max_mex = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            int s;
            cin>>s;
            map<int,int>mp;
            int mx = INT_MIN;
            for(int j = 0 ; j < s ; j++){
                   int a;
                   cin>>a;
                   mp[a]++;
                   mx = max(a,mx);

            }

           // cout<<mx<<endl;
           int c = 0;
           int ans = -1;
           for(int k = 0 ; k <= mx + 5 ; k++){
                 
                 if(mp[k] <= 0  && c == 1){
                     ans = k;
                     break;
                 }

                 if(mp[k] == 0)c = 1;
           }

           max_mex = max(max_mex,ans);
    }

   // cout<<max_mex<<endl;
  if( m <= max_mex){
    cout<<(m + 1)*max_mex<<endl;
  }
  else{
       int temp = (m  * (m + 1))/2;

       temp = temp - ((max_mex*(max_mex + 1))/2);
       int p = (max_mex + 1)* max_mex;

       cout<<temp + p<<endl;

  }
        
    }
}