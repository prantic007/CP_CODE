#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t;
    cin>>t;

    while(t--){
        string a,b;
        cin>>a>>b;
      
       int mx = 0 ;

       int n = a.length();
       int m = b.length();
 
for(int i = 1 ; i <= m ; i++){
    for(int j = 0 ; j <= m - i ; j++){
      string temp = b.substr(j,i);
     // cout<<temp<<endl;
      int len = temp.length();
      int l = 0 ;
      int r = 0;
      int c = 0;
      while(l < len && r < n){

         if(temp[l] == a[r]){
            l++;
            r++;
            c++;
         }
         else r++;
      }

      if(c == len)mx = max(mx,len);

    }
}

int ans = (m - mx)+n;

cout<<ans<<endl;
   

    }
}