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

        map<int,int>mp;

        for(int i = 0 ; i < n ; i++){
            cin>>v[i];
            mp[v[i]]++;
        }

        vector<pair<int,int>>vp;


        for(auto &it : mp){
            vp.push_back({it.first,it.second});
        }
  int l = 0,r = vp.size() - 1;
  //for(auto &it : vp)cout<<it.first<<" "<<it.second<<endl;

  for(int i = 1 ; i < n ; i++){
      if(i %2 != 0){
        vp[l].second--;
        if(vp[l].second <= 0)l++;
      }
      else{
           vp[r].second--;
           if(vp[r].second <= 0)r--;
      }
  }


   cout<<vp[r].first<<endl;

    }
}