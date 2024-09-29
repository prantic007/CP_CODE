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

        bool flag = 0;
   for(auto &it : mp){
      if(it.second % 2 != 0){
           cout<<"YES"<<endl;
           flag = 1;
           break;
      }
   }

   if(flag == 0)cout<<"NO"<<endl;
        
    }
}