#include<bits/stdc++.h>
using namespace std;
#define long long int

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        if(n % 2 == 0){
            cout<<-1<<endl;
            continue;
        }

        if(n == 1){
            cout<<1<<endl;
            continue;
        }


        vector<int>res(n);

        res[(n - 1)/2] = 1;
        int k = 2;
        for(int i = ((n - 1)/2) + 1; i < n ; i++){
            res[i] = k;
            k += 2;
        }
        int p = 3;
        for(int i = ((n-1)/2) - 1 ; i >= 0 ; i --){
               res[i] = p;
               p += 2;
        }

        for(auto &it : res){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}