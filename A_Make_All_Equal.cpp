#include<bits/stdc++.h>
using namespace std;
#define long long int

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

        int mx = 0;
        for(auto &it : mp){
            mx = max(it.second,mx);
        }

        cout<<n-mx<<endl;
    }
}