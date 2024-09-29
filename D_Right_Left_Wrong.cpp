#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        vector<int>v(n);

        for(int i = 0 ; i < n ; i++){
            cin>>v[i];
        }

        vector<int>presum(n);

        presum[0] = v[0];

        for(int i = 1 ; i < n ; i++){
            presum[i] = presum[i - 1] + v[i];
        }

        string s;
        cin>>s;
   vector<pair<int,int>>vp;

       int l = 0,r = n - 1;

       while(l < r){

       while( s[l] != 'L'  && l < n - 1)l++;

       while(s[r] != 'R'  && r > 0)r--;

       if(l < r){vp.push_back({l,r});}

       l++;
       r--;
           

       }


   if(vp.size() == 0)cout<<0<<endl;

   else{
    int sum = 0;
      for(auto &it :vp){
  
  if(it.first >= it.second)continue;

         if(it.first == 0){
            sum += presum[it.second];
         }
         else{
            int p = presum[it.second] - presum[it.first - 1];
            sum += p;
         }
      }

      cout<<sum<<endl;
   }
    }
}