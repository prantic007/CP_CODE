#include<bits/stdc++.h>
using namespace std;
#define int long long



int no_move(int a, vector<int> & teacher , int m , int n){

      int low = 0 ; int high = m - 1;
      int ans = -1;

      while(low <= high){
          int mid = low + (high - low)/2;

          if(teacher[mid] >= a){
             ans = mid ;
             high = mid - 1;
          }
          else  low = mid + 1;
      }

      if(teacher[ans] == a )return 0;
      else if(ans  == -1)return n - teacher[m - 1];

      low = 0,high = m - 1;
      int ans2 = -1;

      while(low <= high){
        int mid = low + (high - low)/2;

        if(teacher[mid]  <= a){
            ans2 = mid;
            low = mid + 1;
        }
        else high = mid - 1;
      }

       //cout<<ans2<<" "<<ans<<endl;

      if(teacher[ans2] == a)return 0;
       else if(ans2 == -1)return teacher[0] - 1;


      int x = (abs(teacher[ans] - teacher[ans2]) - 1);
      return ceil((double)x/2);


}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,q;
        cin>>n>>m>>q;

        vector<int>teacher(m);
        vector<int>query(q);

        for(int i = 0 ; i < m ; i++){
            cin>>teacher[i];
        }
        sort(teacher.begin(),teacher.end());
        for(int  i = 0 ; i < q ; i++){
            cin>>query[i];

            int ans = no_move(query[i],teacher,m,n);

            cout<<ans<<endl;
        }
    }
}