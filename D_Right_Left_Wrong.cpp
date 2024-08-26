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

        string s;
        cin>>s;


        int l = 0,r = n - 1;
        while(l <= r){
            if(s[l] == 'R')l++;
            if(s[r] == 'L')r--;

            if(s[l] == 'L' && s[r] == 'R')break;
        }

cout<<l<<" "<<r<<endl;
        if(l > r){
            cout<<0<<endl;
            continue;
        }

        int sum = 0;
        for(int i = l ; i <= r ; i++){
            sum += v[i];
        }

        cout<<sum<<endl;
    }
}