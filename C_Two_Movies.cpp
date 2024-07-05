#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v1(n);
        vector<int>v2(n);

        for(int i = 0 ; i < n ; i++)cin>>v1[i];
        for(int i = 0 ; i < n ; i++)cin>>v2[i];
    int a = 0 ,b = 0;
    vector<int>res;
for(int i = 0 ; i < n ; i++){
     if(v1[i] > v2[i]) a += v1[i];
     else if(v1[i] < v2[i])b+=v2[i];
     else{
        res.push_back(v1[i]);
     }
}

//cout<<a<<" "<<b<<endl;

for(auto &it : res){

    if(it == -1){
        if(a > b)a--;
        else b--;
    }
    else if(it == 1){
        if(a > b)b++;
        else a++;
    }
}

cout<<min(a,b)<<endl;

    }
}