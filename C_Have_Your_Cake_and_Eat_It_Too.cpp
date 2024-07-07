#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),b(n),c(n);
        
         int sum = 0;
        for(int i =0 ; i < n ; i++){cin>>a[i]; sum += a[i];}
        for(int i =0 ; i < n ; i++)cin>>b[i];
        for(int i =0 ; i < n ; i++)cin>>c[i];

    int x = ceil((double)sum/3);

    vector<pair<int,int>>ap,bp,cp;
   
     int s = 0;
    int i = 0 ,j = 0;
    while(1){
        if(s >= x){
            ap.push_back({i+1,j+1});
            s -= a[i];
            i++;
        }
        else{
            s += a[j];
            j++;
        }
    }


    }
}