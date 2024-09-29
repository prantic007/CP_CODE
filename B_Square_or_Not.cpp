#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

           int n;
           cin>>n;
           string s;
           cin>>s;

           int low = 1;
           int high = 1e4;

           int ans = -1;

           while(low <= high){
            int mid = low + (high - low)/2;
               int x = mid * mid;

               if(x > n)high = mid - 1;
               else if(x < n)low = mid + 1;
               else{ans = mid ; break;} 
           }

           if(ans == -1){
            cout<<"No"<<endl;
            continue;
           }


           int zero = 0,one = 0;

           for(int i = ans ; i < ans + ans; i++){
              if(s[i] == '0')zero++;
              else one++;
           }

           if(one != 2){cout<<"No"<<endl; continue;}
           
           bool flag = 0;
           string temp = s.substr(ans,ans);
           for(int i = ans ; i < n - ans ; i += ans){

               string p = s.substr(i,ans);
               if(p != temp){
                flag = 1;
                break;
               }
               temp = p;

           } 


           if(flag == 1){
            cout<<"No"<<endl;
            continue;
           }


           if(s.substr(0,ans) == s.substr(n - ans,ans))cout<<"Yes"<<endl;


    }
}