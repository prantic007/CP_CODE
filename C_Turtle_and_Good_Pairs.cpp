#include<bits/stdc++.h>
using namespace std;
#define int long long


int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
   sort(s.begin(),s.end());


   string ans = "";

   int l = 0;
   int r = n - 1;


   while(l < n/2){

      ans += s[l];
      l++;
      ans += s[r];
      r--;
   }

   if(n % 2 != 0){
      ans += s[n/2];
   }


   cout<<ans<<endl;



    }
}