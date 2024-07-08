#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
     int mat1[n][m];
     int mat2[n][m];

   for(int i = 0 ; i < n ; i++){
    string s;
    cin>>s;
    for(int j = 0 ; j < m ; j++){
        mat1[i][j] = s[j] - '0';
    }
   }

   for(int i = 0 ; i < n ; i++){
    string s;
    cin>>s;
    for(int j = 0 ; j < m ; j++){
        mat2[i][j] = s[j] - '0';
    }
   }

  
for(int i = 0 ; i < n - 1 ; i++){
    for(int j = 0 ; j < m - 1 ; j++){

           if(mat1[i][j] != mat2[i][j]){
               
               if(mat1[i][j] == 2){
                if(mat2[i][j] == 0){
                    mat1[i][j] = 0;
                    mat1[i + 1][j + 1] = (mat1[i + 1][j + 1] + 1)%3 ;
                    mat1[i][j+1] = (mat1[i][j + 1] + 2)% 3;
                    mat1[i+1][j] = (mat1[i + 1][j] + 2)% 3;
                }
                else if(mat2[i][j] == 1){
                    mat1[i][j] = 1;
                    mat1[i + 1][j + 1] = (mat1[i + 1][j + 1] + 2)%3 ;
                    mat1[i][j+1] = (mat1[i][j + 1] + 1)% 3;
                    mat1[i+1][j] = (mat1[i + 1][j] + 1)% 3;
                }
               }

               else if(mat1[i][j] == 1){
                if(mat2[i][j] == 0){
                    mat1[i][j] = 0;
                    mat1[i + 1][j + 1] = (mat1[i + 1][j + 1] + 2)%3 ;
                    mat1[i][j+1] = (mat1[i][j + 1] + 1)% 3;
                    mat1[i+1][j] = (mat1[i + 1][j] + 1)% 3;
                }
                else if(mat2[i][j] == 2){
                    mat1[i][j] = 2;
                    mat1[i + 1][j + 1] = (mat1[i + 1][j + 1] + 1)%3 ;
                    mat1[i][j+1] = (mat1[i][j + 1] + 2)% 3;
                    mat1[i+1][j] = (mat1[i + 1][j] + 2)% 3;
                }
               }


               if(mat1[i][j] == 0){
                if(mat2[i][j] == 1){
                    mat1[i][j] = 1;
                    mat1[i + 1][j + 1] = (mat1[i + 1][j + 1] + 1)%3 ;
                    mat1[i][j+1] = (mat1[i][j + 1] + 2)% 3;
                    mat1[i+1][j] = (mat1[i + 1][j] + 2)% 3;
                }
                else if(mat2[i][j] == 2){
                    mat1[i][j] = 2;
                    mat1[i + 1][j + 1] = (mat1[i + 1][j + 1] + 2)%3 ;
                    mat1[i][j+1] = (mat1[i][j + 1] + 1)% 3;
                    mat1[i+1][j] = (mat1[i + 1][j] + 1)% 3;
                }
               }
           }

    }
}


   bool flag = 0;

   for(int i =0 ; i < n ; i++){
    for(int j = 0 ; j < m ; j++){
        if(mat1[i][j] != mat2[i][j]){
            flag = 1;
            break;
        }
    }
   }

if(flag == 1)cout<<"NO"<<endl;
else cout<<"YES"<<endl;
    }
}