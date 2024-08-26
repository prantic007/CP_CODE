#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        int n;
        cin>>n>>s;
       // int n = s.length();
        if(s[0] != s[n-1])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}